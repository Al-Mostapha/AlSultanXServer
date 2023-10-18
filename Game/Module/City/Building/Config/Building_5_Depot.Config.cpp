#include "Building.Config.h"

void CBuilding::InitDepot(){
  _BuildingSpecs[EBuilding::Depot] =  {}; // 105
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::Depot]; // 105
  lBuilding.index = 5;
  lBuilding.BuildingID = EBuilding::Depot; // 105
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = true;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;

  lBuilding.BuildingName = "buildDes_name_105";
  lBuilding.BuildingIcon = "quest_building_105.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_105";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_105";
}