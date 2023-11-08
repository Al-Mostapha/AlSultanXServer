#include "Building.Config.h"

void CBuilding::InitCrystalMine(){
  _BuildingSpecs[EBuilding::CrystalMine] =  {}; // 207
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::CrystalMine]; // 207
  lBuilding.index = 31;
  lBuilding.oldUnlocklevel = 60;
  lBuilding.oldShowlevel = 60;
  lBuilding.unlocklevel = 60;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Fixed;
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
  
  lBuilding.BuildingName = "common_text_3969";
  lBuilding.BuildingIcon = "quest_building_207.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_207";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_207";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_207";
}