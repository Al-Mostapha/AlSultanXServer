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
    void Select(const QString &pTable, QVector<QString> pFields, QHash<QString, QVariant> pWhere);
    void Execute(const QString pQuery, QHash<QString, QVariant> pBinds);
};
