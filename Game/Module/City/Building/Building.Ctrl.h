#pragma once
#include <QObject>
#include "Core/IController.h"

class BuildingCtrl : public IController
{
  Q_OBJECT
  X_Controller(BuildingCtrl)

public:
  Q_INVOKABLE void GetCityBuildings();
};

Q_DECLARE_METATYPE(BuildingCtrl *)