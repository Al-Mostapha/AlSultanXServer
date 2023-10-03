#pragma once
#include <QtCore/QObject>
#include <QtCore/QHash>
#include <QtCore/QUuid>
#include <QWebSocketServer>
#include "Server/IXserver.h"

QT_FORWARD_DECLARE_CLASS(QWebSocket)
QT_FORWARD_DECLARE_CLASS(QString)
QT_FORWARD_DECLARE_CLASS(QUuid)
QT_FORWARD_DECLARE_CLASS(XConnection)

namespace WS{
  class XServer : public IXServer
  {
      Q_OBJECT
      QWebSocketServer *_WebSocketServer;
  public:
      explicit XServer(QObject *parent = nullptr);
      ~XServer() override;
      void Start() override;
      void Stop() override;
      void Send(const QString &pMessage, QUuid pPlayerID) override;
      void Send(const QJsonObject &pMessage, QUuid pPlayerID) override;
      virtual void OnRequest(const QString &pMessage, XConnection *pCon) = 0;

  private slots:
      virtual void OnNewConnection() ;
      virtual void ProcessMessage(const QString &message);
      virtual void SocketDisconnected();

  private:
      QHash<QUuid, XConnection *> _Connections;
  };
}