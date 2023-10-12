#pragma once
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "DB/IDataBase.Service.h"


class XPgDataBase : public IDataBaseService
{
  Q_OBJECT
  QSqlDatabase _DB;
  public:
    XPgDataBase(QObject* a_Parent = nullptr){}
    ~XPgDataBase(){}
    bool Init() override;
    void Stop();
    void Insert(const QString &pTable, const QHash<QString, QVariant> pParam);
    void Update(const QString &pTable, const QHash<QString, QVariant> pParam, QHash<QString, QVariant> pWhere);
    void Delete(const QString &pTable, QHash<QString, QVariant> pWhere);
    // template<typename T>
    // QList<QSharedPointer<T>> Select(const QStringList &pFields, const QString &pTable, const QString &pWhere, const QList<QVariant> pBind = {});
    QVariantList Select(const QStringList &pFields, const QString &pTable, const QString &pWhere, const QVariantList pBind = {}) override;
    QVariant Insert(const QStringList &pFields, const QString &pTable, const QVariantList pBind = {}) override;
    void Execute(const QString pQuery, QHash<QString, QVariant> pBinds);
};

// template<typename T>
// QList<QSharedPointer<T>> XPgDataBase::Select(
//   const QStringList &pFields, const QString &pTable, 
//   const QString &pWhere, const QList<QVariant> pBinds)
// {
//   QString lFields = pFields.join(", ");
//   QSqlQuery query(QString("SELECT %1 FROM " + pTable + " WHERE %3").arg(lFields).arg(pWhere));
//   for(auto lOneBind : pBinds){
//     query.addBindValue(lOneBind);
//   }
//   QList<QSharedPointer<T>> lRetList;
//   while (query.next())
//   {
//     lRetList.push_back(QSharedPointer<T>(new T()));
//     lRetList.back()->FromQuery(query);
//   }
  
//   qDebug() << query.lastError().text();

//   return lRetList;
// }