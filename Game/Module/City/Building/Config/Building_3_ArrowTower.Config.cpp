#include "Building.Config.h"

void CBuilding::InitArrowTower(){
  _BuildingSpecs[EBuilding::ArrowTower] =  {}; // 103
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::ArrowTower]; // 103
  lBuilding.index = 3;
  lBuilding.BuildingID = EBuilding::ArrowTower; // 103
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 7;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 2;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;

  lBuilding.BuildingName = "buildDes_name_103";
  lBuilding.BuildingIcon = "quest_building_103.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_103";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_103";
}