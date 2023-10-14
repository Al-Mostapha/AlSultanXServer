#include "Building.Config.h"

void CBuilding::InitWall(){
  _BuildingSpecs[EBuilding::Wall] =  {};
  RBuildingSpecs &lBuilding = _BuildingSpecs[EBuilding::Wall];
  lBuilding.index = 2;
  lBuilding.BuildingID = EBuilding::Wall;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = 1;
  lBuilding.openStar = 1;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;
  
}