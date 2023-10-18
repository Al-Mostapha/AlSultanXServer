#include "Building.Config.h"

void CBuilding::InitChariotPlant(){
  _BuildingSpecs[EBuilding::ChariotPlant] =  {}; // 119
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::ChariotPlant]; // 119
  lBuilding.index = 19;
  lBuilding.oldUnlocklevel = 4;
  lBuilding.oldShowlevel = 4;
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
  
  lBuilding.BuildingName = "buildDes_name_119";
  lBuilding.BuildingIcon = "quest_building_119.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_119";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_119";
  lBuilding.Describe = "buildDes_describe_119";
  lBuilding.WarDescribe = "buildDes_war_describe_04";
  lBuilding.StarDescribe = "Glory_text_07";
}