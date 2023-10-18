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
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;

  lBuilding.BuildingName = "buildDes_name_102";
  lBuilding.BuildingIcon = "quest_building_102.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_102";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_102";
  
}