#include "XServer.h"
#include "XConnection.h"
#include <QtWebSockets>
#include <QtCore>



QT_USE_NAMESPACE

static QString getIdentifier(QWebSocket *peer)
{
    return QStringLiteral("%1:%2").arg(peer->peerAddress().toString(), QString::number(peer->peerPort()));
}

//! [constructor]
XServer::XServer(quint16 port, QObject *parent) :
    QWebSocketServer(
      QStringLiteral("Chat Server"),
      QWebSocketServer::NonSecureMode)
{
  if(listen(QHostAddress::Any, port)){
    qDebug() << "Chat Server listening on port" << port;
    connect(this, &QWebSocketServer::newConnection,
            this, &XServer::onNewConnection);
  }
}

XServer::~XServer()
{
  close();
}
//! [constructor]

//! [onNewConnection]
void XServer::onNewConnection()
{
    auto pSocket = nextPendingConnection();
    qDebug() << getIdentifier(pSocket) << " connected!\n";
    pSocket->setParent(this);
    auto l_IdPlayer = QUuid::createUuid();
    auto l_Player = new XConnection(l_IdPlayer, pSocket, this);
    connect(l_Player, &XConnection::JsonReceived, this, &XServer::processMessage);
    connect(l_Player, &XConnection::Disconnected, this, &XServer::socketDisconnected);
    _Connections[l_IdPlayer] = l_Player;
}
//! [onNewConnection]

//! [processMessage]
void XServer::processMessage(const QString &message)
{
    XConnection *pSender = qobject_cast<XConnection *>(sender());
    for (auto pClient : _Connections) {
      pClient->SendJson(message);
    }
}
//! [processMessage]

//! [socketDisconnected]
void XServer::socketDisconnected()
{
    XConnection *pClient = qobject_cast<XConnection *>(sender());
    QTextStream(stdout) << getIdentifier(pClient->GetSocket()) << " disconnected!\n";
    if (pClient)
    {
        _Connections.remove(pClient->GetIdPlayer());
        pClient->deleteLater();
    }
}