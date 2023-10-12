#pragma once
#include <QObject>
#include "Core/IController.h"

class ACity : public IController
{
  Q_OBJECT
  X_Controller(ACity)

public:
  Q_INVOKABLE QVariantHash GetCityList();
  QVariantHash GetCityInfo();
  int Create();
  
};

Q_DECLARE_METATYPE(ACity)