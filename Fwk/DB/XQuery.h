#pragma once
#include <QObject>
#include "XColumn.h"
#include "IDataBase.Service.h"


enum class XQueryType
{
  Select,
  Insert,
  Update,
  Delete,
  Execute
};

class XQuery : public QObject
{
  Q_OBJECT
  XQueryType _Type;
  QString _Table;
  XColumn _PrimaryKey;
  QVector<XColumn> _Columns;
  QVector<XColumn> _Where;
  QVector<XColumn> _OrderBy;
  QVector<XColumn> _GroupBy;
  QVector<XColumn> _Having;
  IDataBaseService *_DB;
public:
  XQuery(QObject* a_Parent = nullptr) : QObject(a_Parent){}
  ~XQuery(){}
  void SetType(XQueryType pType){}
  void SetDB(IDataBaseService *pDB){}
  void SetTable(const QString& pTable){}
  void SetPrimaryKey(const XColumn& pPrimaryKey){}
  void AddColumn(const XColumn& pColumn){}
  void AddWhere(const XColumn& pWhere, QVariant pValue){}
  void AddOrderBy(const XColumn& pOrderBy){}
  void AddGroupBy(const XColumn& pGroupBy){}
  void AddHaving(const XColumn& pHaving){}
  XQueryType GetType() const{}
  QString GetTable() const{}
  XColumn GetPrimaryKey() const{}
  QVector<XColumn> GetColumns() const{}
  QVector<XColumn> GetWhere() const{}
  QVector<XColumn> GetOrderBy() const{}
  QVector<XColumn> GetGroupBy() const{}
  QVector<XColumn> GetHaving() const{}
};