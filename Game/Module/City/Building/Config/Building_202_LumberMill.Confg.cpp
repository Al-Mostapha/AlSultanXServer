#include "Building.Config.h"

void CBuilding::InitLumberMill(){
  _BuildingSpecs[EBuilding::LumberMill] =  {}; // 202
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::LumberMill]; // 202
  lBuilding.index = 24;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Outer;
  lBuilding.maxCount = 10;
  lBuilding.isDemolish = true;
  lBuilding.isExchange = true;
  lBuilding.isBuild = true;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;
  
  lBuilding.BuildingName = "buildDes_name_202";
  lBuilding.BuildingIcon = "quest_building_202.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_202";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_202";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_202";
}