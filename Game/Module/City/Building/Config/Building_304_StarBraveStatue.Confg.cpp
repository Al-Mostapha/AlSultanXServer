#include "Building.Config.h"

void CBuilding::InitStarBraveStatue(){
  _BuildingSpecs[EBuilding::StarBraveStatue] =  {}; // 304
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::StarBraveStatue]; // 304
  lBuilding.index = 35;
  lBuilding.oldUnlocklevel = 0;
  lBuilding.oldShowlevel = 0;
  lBuilding.unlocklevel = 110;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = false;
  lBuilding.maxLvl = 1;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 160;
  lBuilding.addmaxstarlv = 260;
  
  lBuilding.BuildingName = "Soldiers_armor_text_48";
  lBuilding.BuildingIcon = "quest_building_man.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_304";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_304";
  lBuilding.WarDescribe = "";
  lBuilding.StarDescribe = "buildDes_describe_304";
}