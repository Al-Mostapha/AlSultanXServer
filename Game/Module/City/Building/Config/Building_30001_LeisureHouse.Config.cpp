#include "Building.Config.h"

void CBuilding::InitLeisureHouse(){
  
    QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::LeisureHouse, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::LeisureHouse]; // 30001
  lBuilding.index = 40;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 5;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = false;
  lBuilding.maxLvl = 1;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
}