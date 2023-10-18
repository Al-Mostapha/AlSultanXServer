#include "Building.Config.h"

void CBuilding::InitWatchTower(){
  _BuildingSpecs[EBuilding::WatchTower] =  {}; // 104
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::WatchTower]; // 104
  lBuilding.index = 4;
  lBuilding.BuildingID = EBuilding::WatchTower; // 104
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 5;
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

  lBuilding.BuildingName = "buildDes_name_104";
  lBuilding.BuildingIcon = "quest_building_104.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_104";
  lBuilding.Describe = "buildDes_describe_104";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
}