#pragma once
#include <QPointer>
#include "Module/City/Building/Building.Type.h"

class CBuildingTip{
  void ProduceJson();
  QHash<EBuildingTips, QPointer<RBuildingTipConfig>> _BuildingTipConfig;
  public:
  static CBuildingTip *Get();
  void Init();

};