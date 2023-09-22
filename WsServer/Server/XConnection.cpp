#include "XConnection.h"


XConnection::XConnection(const QUuid &p_IdPlayer, QWebSocket *socket, QObject *parent) :
  QObject(parent),
  _Socket(socket),
  _IdPlayer(p_IdPlayer)
{
  qDebug() << "XConnection::XConnection" << _IdPlayer;
  connect(_Socket, &QWebSocket::textMessageReceived, this, &XConnection::OnTextMessageReceived);
  connect(_Socket, &QWebSocket::disconnected, this, &XConnection::OnClosed);
  connect(_Socket, &QWebSocket::stateChanged, this, &XConnection::OnStateChanged);
}

XConnection::~XConnection()
{
  qDebug() << "XConnection::~XConnection" << _IdPlayer;
}

void XConnection::SendJson(const QString &message)
{
  _Socket->sendTextMessage(message);
}

void XConnection::OnClosed()
{
  qDebug() << "XConnection::OnClosed" << _IdPlayer;
  emit Disconnected(_Socket->closeCode(), _Socket->closeReason());
  emit Closed(_IdPlayer);
}

void XConnection::OnTextMessageReceived(const QString &message)
{
  qDebug() << "XConnection::OnTextMessageReceived" << _IdPlayer << message;
  emit JsonReceived(message);
}

void XConnection::OnStateChanged(QAbstractSocket::SocketState state)
{
  qDebug() << "XConnection::OnStateChanged" << _IdPlayer << state;
}

