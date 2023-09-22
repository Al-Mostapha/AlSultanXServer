#pragma once

#include <QtCore/QObject>
#include <QWebSocket>
#include <QtCore/QUuid>

QT_FORWARD_DECLARE_CLASS(QString)

class XConnection : public QObject
{
    Q_OBJECT
public:
  explicit XConnection(const QUuid &p_IdPlayer, QWebSocket *socket, QObject *parent = nullptr);
  ~XConnection() override;
  QUuid _IdPlayer;
  QWebSocket *_Socket;
  void SendJson(const QString &message);
  QWebSocket *GetSocket() const { return _Socket; }
  const QUuid &GetIdPlayer() const { return _IdPlayer; }
signals: 
  void Closed(const QUuid &p_IdPlayer);
  void JsonReceived(const QString &message);
  void Disconnected(QWebSocketProtocol::CloseCode closeCode, const QString &reason);

private slots:
  void OnClosed();
  void OnTextMessageReceived(const QString &message);
  void OnStateChanged(QAbstractSocket::SocketState state);
};