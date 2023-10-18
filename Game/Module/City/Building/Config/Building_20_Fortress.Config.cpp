#include "Building.Config.h"

void CBuilding::InitFortress(){
  _BuildingSpecs[EBuilding::Fortress] =  {}; // 120
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::Fortress]; // 120
  lBuilding.index = 20;
  lBuilding.oldUnlocklevel = 6;
  lBuilding.oldShowlevel = 6;
  lBuilding.unlocklevel = 6;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = true;
  lBuilding.isBuild = true;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 30;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
  
  lBuilding.BuildingName = "buildDes_name_120";
  lBuilding.BuildingIcon = "quest_building_120.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_120";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_120";
  lBuilding.Describe = "buildDes_describe_120";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
}