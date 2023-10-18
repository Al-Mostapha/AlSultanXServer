#include "Building.Config.h"

void CBuilding::InitBlacksmith(){
  _BuildingSpecs[EBuilding::Blacksmith] =  {}; // 115
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::Blacksmith]; // 115
  lBuilding.index = 15;
  lBuilding.oldUnlocklevel = 10;
  lBuilding.oldShowlevel = 10;
  lBuilding.unlocklevel = 10;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 30;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
  
  lBuilding.BuildingName = "buildDes_name_115";
  lBuilding.BuildingIcon = "quest_building_115.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_115";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_115";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
}