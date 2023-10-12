#pragma once
#include <QList>
#include <QPair>
#include "Building.Type.h"


class BuildingStatic
{
  static QList<RBuildingDefault> _DefaultBuildings;
public:
  static BuildingStatic *Get();
  const QList<RBuildingDefault> &GetBuildingList(){ return _DefaultBuildings;}
  void Init();
};