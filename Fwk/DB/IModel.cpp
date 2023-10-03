#include "IModel.h"
#include <QMetaProperty>
#include <QDebug>
#include <QVariant>


void IModel::RegisterColumn(){
  const QMetaObject *lMetaObj = metaObject();
  int count = lMetaObj->propertyCount();
  for (int i=0; i< count; ++i) {
    QMetaProperty lMetaProp = lMetaObj->property(i);
    const char *lPropName = lMetaProp.name();
    auto lVal = property(lPropName);
    _Fields.insert(QString(lPropName), lVal);
  }
}

void IModel::FromQuery(const QSqlQuery &pQuery){
  for(auto lKey : _Fields.keys()){
    if(pQuery.value(lKey).isValid() && !pQuery.value(lKey).isNull()){
      auto lVal = pQuery.value(lKey);
      setProperty(lKey.toStdString().c_str(), lVal);
    }
  }
}

IModel::IModel(){}
IModel *IModel::Get(const QUuid& pID) const{ return nullptr;}
IModel *IModel::Get(const int& pID) const{ return nullptr;}
IModel *IModel::Limit(int pLimit) const{ return nullptr;}
IModel *IModel::Offset(int pOffset) const{ return nullptr;}
IModel *IModel::OrderBy(const QString& pOrderBy) const{ return nullptr;}
IModel *IModel::Where(const QString& pWhere) const{ return nullptr;}
IModel *IModel::Where(const QString& pWhere, const QVariant& pValue) const{ return nullptr;}
IModel *IModel::Where(const QString& pWhere, const QVariant& pValue1, const QVariant& pValue2) const{ return nullptr;}
IModel *IModel::And(const QString& pWhere) const{ return nullptr;}
IModel *IModel::And(const QString& pWhere, const QVariant& pValue) const{ return nullptr;}
IModel *IModel::Or(const QString& pWhere) const{ return nullptr;}
IModel *IModel::Execute() const{ return nullptr;}
IModel *IModel::Insert(QHash<QString, QVariant> pRow) const{ return nullptr;}
IModel *IModel::Update(QHash<QString, QVariant> pRow) const{ return nullptr;}
IModel *IModel::Delete() const{ return nullptr;}