#pragma once
#include <QObject>
#include <QUuid>
#include <QVariant>
#include <QHash>
#include "XDBMacro.h"
#include "IDataBase.Service.h"
#include "XQuery.h"
#include "XColumn.h"

class IModel : public QObject
{
  Q_OBJECT
protected:
  XColumn _PrimaryKey;
  QString _TableName;
  QHash<QString, QVariant> _Fields;
  // XQuery _Query;
public:
  IModel(IDataBaseService *pDB, QObject* a_Parent = nullptr);
  template <typename T>
  T* As() { return dynamic_cast<T*>(this); }

  template <typename T>
  const T* As() const { return dynamic_cast<const T*>(this); }
  
  virtual IModel *Get(const QUuid& pID) const;
  virtual IModel *Get(const int& pID) const;
  virtual IModel *Limit(int pLimit) const;
  virtual IModel *Offset(int pOffset) const;
  virtual IModel *OrderBy(const QString& pOrderBy) const;
  virtual IModel *Where(const QString& pWhere) const;
  virtual IModel *Where(const QString& pWhere, const QVariant& pValue) const;
  virtual IModel *Where(const QString& pWhere, const QVariant& pValue1, const QVariant& pValue2) const;
  virtual IModel *And(const QString& pWhere) const;
  virtual IModel *And(const QString& pWhere, const QVariant& pValue) const;
  virtual IModel *Or(const QString& pWhere) const;
  virtual IModel *Execute() const;
  virtual IModel *Insert(QHash<QString, QVariant> pRow) const;
  virtual IModel *Update(QHash<QString, QVariant> pRow) const;
  virtual IModel *Delete() const;
  void RegisterColumn();
};
