#pragma once
#include "DB/IModel.h"

class XModel : public IModel
{
  Q_OBJECT
public:
  QVariantList Select(const QStringList& pColumns, const QString& pWhere, const QVariantList& pValue = {}) const override;
};