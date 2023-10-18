#include "Building.Config.h"

void CBuilding::InitDrillGrounds(){
  _BuildingSpecs[EBuilding::DrillGrounds] =  {}; // 121
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::DrillGrounds]; // 121
  lBuilding.index = 21;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = true;
  lBuilding.isBuild = true;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;
  
  lBuilding.BuildingName = "buildDes_name_121";
  lBuilding.BuildingIcon = "quest_building_121.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_121";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_121";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
}