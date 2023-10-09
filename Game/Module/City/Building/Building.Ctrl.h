#pragma once
#include <QObject>
#include "Core/IController.h"

class ACityBuilding : public IController
{
  Q_OBJECT
  X_Controller(ACityBuilding)

public:
  Q_INVOKABLE QVariantHash GetBuildingList();
  
};

Q_DECLARE_METATYPE(ACityBuilding)