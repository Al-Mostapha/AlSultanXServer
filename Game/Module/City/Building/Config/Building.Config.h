#pragma once
#include "Module/City/Building/Building.Type.h"

class CBuilding{
  public:
    QHash<EBuilding, RBuildingSpecs> _BuildingSpecs;
    static CBuilding *Get();
    void Init();
    void InitCastle();
    void InitWall();

};