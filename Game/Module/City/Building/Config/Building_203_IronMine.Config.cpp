#include "Building.Config.h"

void CBuilding::InitIronMine(){
  _BuildingSpecs[EBuilding::IronMine] =  {}; // 203
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::IronMine]; // 203
  lBuilding.index = 25;
  lBuilding.oldUnlocklevel = 10;
  lBuilding.oldShowlevel = 10;
  lBuilding.unlocklevel = 10;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Outer;
  lBuilding.maxCount = 8;
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
  
  lBuilding.BuildingName = "buildDes_name_203";
  lBuilding.BuildingIcon = "quest_building_203.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_203";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_203";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_203";

  lBuilding.TipButtons.bid = 203;
  lBuilding.TipButtons.BuildingName = "buildDes_name_203";
  lBuilding.TipButtons.PicFile = "pic414000_2.png";
  lBuilding.TipButtons.ImgFile = "building_018.png";
  lBuilding.TipButtons.Offset = {0, -15};
  lBuilding.TipButtons.OffsetByzantine = {0, -15};
  lBuilding.TipButtons.bIsInnerBuilding = false;
  lBuilding.TipButtons.bCanBuild = 2;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpBoost,
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpCollect,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}