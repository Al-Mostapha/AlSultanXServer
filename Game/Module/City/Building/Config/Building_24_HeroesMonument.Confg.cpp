#include "Building.Config.h"

void CBuilding::InitHeroesMonument(){
  _BuildingSpecs[EBuilding::HeroesMonument] =  {}; // 124
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::HeroesMonument]; // 124
  lBuilding.index = 33;
  lBuilding.oldUnlocklevel = 16;
  lBuilding.oldShowlevel = 16;
  lBuilding.unlocklevel = 23;
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
  
  lBuilding.BuildingName = "buildDes_name_124";
  lBuilding.BuildingIcon = "quest_building_124.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_124";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_124";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
}