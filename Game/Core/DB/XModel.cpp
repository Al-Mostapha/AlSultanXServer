#include "XModel.h"
#include "Core/Global/XGlobal.h"

QVariantList XModel::Select(
  const QStringList& pColumns, 
  const QString& pWhere, const QVariantList& pValue) const {
  return XGlobal::Get()->GetDB()->Select(pColumns, "\"" + _TableName + "\"", pWhere, pValue);
};
