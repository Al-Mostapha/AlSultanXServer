#pragma once
#include <QObject>
#include <QUuid>  
#include <QJsonObject>
#include <QHostAddress>

class IXServer : public QObject{
  Q_OBJECT
protected:
  quint16 _Port;
  QHostAddress _HostAddress;
public:
  virtual ~IXServer() = default;
  virtual void Start() = 0;
  virtual void Stop() = 0;
  virtual void Send(const QString &pMessage, QUuid pPlayerID) = 0;
  virtual void Send(const QJsonObject &pMessage, QUuid pPlayerID) = 0;
  virtual void RegisterController() = 0;
  void SetPort(quint16 pPort) { _Port = pPort; }
  quint16 GetPort() const { return _Port; }
  void SetAddress(const QHostAddress &pAddress) { _HostAddress = pAddress; }
  const QHostAddress &GetAddress() const { return _HostAddress; }
signals:
  void Started();
  void Stopped();

};