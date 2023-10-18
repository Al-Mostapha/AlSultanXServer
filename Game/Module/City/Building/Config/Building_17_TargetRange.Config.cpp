#include "Building.Config.h"

void CBuilding::InitTargetRange(){
  _BuildingSpecs[EBuilding::TargetRange] =  {}; // 117
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::TargetRange]; // 117
  lBuilding.index = 17;
  lBuilding.oldUnlocklevel = 3;
  lBuilding.oldShowlevel = 3;
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
  
  lBuilding.BuildingName = "buildDes_name_117";
  lBuilding.BuildingIcon = "quest_building_117.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_117";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_117";
  lBuilding.Describe = "buildDes_describe_117";
  lBuilding.WarDescribe = "buildDes_war_describe_02";
  lBuilding.StarDescribe = "Glory_text_06";
}