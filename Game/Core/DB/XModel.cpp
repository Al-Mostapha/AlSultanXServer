#include "XModel.h"
#include "Core/Global/XGlobal.h"

QVariantList XModel::Select(
  const QStringList& pColumns, 
  const QString& pWhere, const QVariantList& pValue) const {
  return XGlobal::Get()->GetDB()->Select(pColumns, "\"" + _TableName + "\"", pWhere, pValue);
};

QVariant XModel::Insert(const QStringList& pColumns, const QVariantList& pValue) const {
  return XGlobal::Get()->GetDB()->Insert(pColumns, "\"" + _TableName + "\"", pValue);
};

QVariant XModel::Insert() const {
  QStringList lColumns;
  QVariantList lValues;
  const QMetaObject *lMetaObj = metaObject();
  int count = lMetaObj->propertyCount();
  for (int i=0; i< count; ++i) {
    QMetaProperty lMetaProp = lMetaObj->property(i);
    const char *lPropName = lMetaProp.name();
    auto lVal = property(lPropName);
    auto lStrPropName  = QString(lPropName);
    if(!lVal.isValid())
      continue;
    if(lVal.isNull())
      continue;
    if(lStrPropName == "objectName")
      continue;

    lColumns.append("\"" + QString(lPropName) + "\"");
    if(lVal.canConvert(QMetaType::QUuid))
      lValues.append(QUuid::createUuid());
    else
      lValues.append(lVal);
    
  }

  qDebug() << "Insert : " << _TableName << " : " << lColumns << " : " << lValues;
  
  return Insert(lColumns, lValues);
}