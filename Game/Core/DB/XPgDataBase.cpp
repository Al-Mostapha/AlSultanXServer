#include "XPgDataBase.h"
#include <QSqlError>
#include "Core/Logger/XLogger.h"
#include "Core/Setting/XSetting.h"
#include "Core/Global/XGlobal.h"

bool XPgDataBase::Init(){
  _DB = QSqlDatabase::addDatabase("QPSQL");
  _DB.setHostName(XSetting::Get()->_DBHost);
  _DB.setDatabaseName(XSetting::Get()->_DBName);
  _DB.setUserName(XSetting::Get()->_DBUser);
  _DB.setPassword(XSetting::Get()->_DBPassword);
  _DB.setPort(XSetting::Get()->_DBPort);

  if (_DB.open())
  {
    XGlobal::Get()->GetLogger()->LogAction(
      "DataBase Connected : " + XSetting::Get()->_DBName
      + "\n Host : " + XSetting::Get()->_DBHost
      + "\n Port : " + QString::number(XSetting::Get()->_DBPort)
      + "\n User : " + XSetting::Get()->_DBUser
      );
  } else {
    qDebug() << "DataBase Open error" << _DB.lastError().text();
    return false;
  }
  return true;
}

void XPgDataBase::Stop(){}

void XPgDataBase::Insert(const QString &pTable, const QHash<QString, QVariant> pParam){}

void XPgDataBase::Update(const QString &pTable, const QHash<QString, QVariant> pParam, QHash<QString, QVariant> pWhere){}

void XPgDataBase::Delete(const QString &pTable, QHash<QString, QVariant> pWhere){}

void XPgDataBase::Execute(const QString pQuery, QHash<QString, QVariant> pBinds){}