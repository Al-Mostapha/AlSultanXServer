#include "XPgDataBase.h"
#include <QSqlError>
#include <QSqlRecord>
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

QVariantList  XPgDataBase::Select(
  const QStringList &pFields, const QString &pTable, 
  const QString &pWhere, const QVariantList pBinds){

  QString lFields = pFields.join(", ");
  QString lQueryStr = QString("SELECT "+ lFields +" FROM " + pTable + " WHERE " + pWhere);
  QSqlQuery lQuery;
  lQuery.prepare(lQueryStr);
  foreach (QVariant lBind, pBinds) {
    lQuery.addBindValue(lBind);
  }

  QVariantList resultList;
  if(lQuery.exec()){
    while (lQuery.next()) {
        QSqlRecord record = lQuery.record();
        QVariantHash resultHash;
        for (int i = 0; i < record.count(); ++i) {
            QString key = record.fieldName(i);
            QVariant value = record.value(i);
            resultHash.insert(key, value);
        }
        resultList.append(resultHash);
    }
  }else{
    qDebug() << "XPgDataBase::Select error" << lQuery.lastError().text();
  }
  return resultList;
}


QVariant XPgDataBase::Insert(const QStringList &pFields, const QString &pTable, const QVariantList pBinds){
  QString lFields = pFields.join(", ");
  QString lQueryStr = QString("INSERT INTO " + pTable + " (" + lFields + ") VALUES (");
  for(int i = 0; i < pFields.size(); i++){
    lQueryStr += QString("?, ");
  }
  lQueryStr.chop(2);
  lQueryStr += QString(")");
  QSqlQuery lQuery;
  lQuery.prepare(lQueryStr);
  foreach (QVariant lBind, pBinds) {
    lQuery.addBindValue(lBind);
  }
  if(lQuery.exec()){
    return lQuery.lastInsertId();
  }else{
    qDebug() << "XPgDataBase::Insert error" << lQuery.lastError().text();
  }
  return {};
}