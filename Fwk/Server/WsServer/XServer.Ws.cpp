#include "XServer.Ws.h"
#include "Server/Connection/XConnection.h"
#include <QtWebSockets>
#include <QtCore>


QT_USE_NAMESPACE

static QString getIdentifier(QWebSocket *peer)
{
    return QStringLiteral("%1:%2").arg(peer->peerAddress().toString(), QString::number(peer->peerPort()));
}

//! [constructor]
WS::XServer::XServer(QObject *parent){

}

void WS::XServer::Start(){
  _WebSocketServer = 
    new QWebSocketServer("Ws Server", QWebSocketServer::NonSecureMode);
  if(_WebSocketServer->listen(_HostAddress, _Port)){
    qDebug() << 
    _WebSocketServer->serverName() << "listening on port" << _WebSocketServer->serverPort();
    connect(_WebSocketServer, &QWebSocketServer::newConnection, this, &XServer::OnNewConnection);
  }
}

WS::XServer::~XServer()
{
  _WebSocketServer->close();
  _WebSocketServer->deleteLater();
}
//! [constructor]

//! [onNewConnection]
void WS::XServer::OnNewConnection()
{
    auto pSocket = _WebSocketServer->nextPendingConnection();
    qDebug() << getIdentifier(pSocket) << " connected!\n";
    pSocket->setParent(this);
    auto l_IdPlayer = QUuid::createUuid();
    auto l_Player = new XConnection(l_IdPlayer, pSocket, this);
    QObject::connect(l_Player, &XConnection::JsonReceived, this, &WS::XServer::ProcessMessage);
    QObject::connect(l_Player, &XConnection::Disconnected, this, &WS::XServer::SocketDisconnected);
    _Connections[l_IdPlayer] = l_Player;
}
//! [onNewConnection]

//! [processMessage]
void WS::XServer::ProcessMessage(const QString &pMsg)
{
  auto lConnection = qobject_cast<XConnection *>(QObject::sender());
  OnRequest(pMsg, lConnection);
  qDebug() << "XServer::ProcessMessage " << pMsg;
  for (auto pClient : _Connections) {
    pClient->SendJson(pMsg);
  }
}
//! [processMessage]

//! [socketDisconnected]
void WS::XServer::SocketDisconnected()
{
    XConnection *pClient = qobject_cast<XConnection *>(QObject::sender());
    QTextStream(stdout) << getIdentifier(pClient->GetSocket()) << " disconnected!\n";
    if (pClient)
    {
        _Connections.remove(pClient->GetIdPlayer());
        pClient->deleteLater();
    }
}

void WS::XServer::Stop(){
  _WebSocketServer->close();
  _WebSocketServer->deleteLater();
};

void WS::XServer::Send(const QString &pMessage, QUuid pPlayerID) {
  _Connections[pPlayerID]->SendJson(pMessage);
};

void WS::XServer::Send(const QJsonObject &pMessage, QUuid pPlayerID) {
  Send(QString(QJsonDocument(pMessage).toJson()), pPlayerID);
};