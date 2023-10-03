#pragma once
#include <QObject>
#include <QString>

class IDataBaseService : public QObject
{
  Q_OBJECT

  QString _Url;
  QString _User;
  QString _Password;
  QString _Database;
  int _Port;

public:
  IDataBaseService(QObject* a_Parent = nullptr) : QObject(a_Parent) {}
  virtual ~IDataBaseService() {}
  virtual bool Init() = 0;
  virtual void Stop() = 0;
  virtual void SetUrl(const QString& pUrl) { _Url = pUrl; }
  virtual void SetUser(const QString& pUser) { _User = pUser; }
  virtual void SetPassword(const QString& pPassword) { _Password = pPassword; }
  virtual void SetDatabase(const QString& pDatabase) { _Database = pDatabase; }
  virtual void SetPort(quint16 pPort) { _Port = pPort; }
  virtual QString GetUrl() const { return _Url; }
  virtual QString GetUser() const { return _User; }
  virtual QString GetPassword() const { return _Password; }
  virtual QString GetDatabase() const { return _Database; }
  virtual quint16 GetPort() const { return _Port; }
  virtual void Insert(const QString &pTable, const QHash<QString, QVariant> pParam) = 0;
  virtual void Update(const QString &pTable, const QHash<QString, QVariant> pParam, QHash<QString, QVariant> pWhere) = 0;
  virtual void Delete(const QString &pTable, QHash<QString, QVariant> pWhere) = 0;
  virtual void Execute(const QString pQuery, QHash<QString, QVariant> pBinds) = 0;
};