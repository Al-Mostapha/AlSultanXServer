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

  lBuilding.TipButtons.bid = 207;
  lBuilding.TipButtons.BuildingName = "common_text_3969";
  lBuilding.TipButtons.PicFile = "pic414000_2.png";
  lBuilding.TipButtons.ImgFile = "building_018.png";
  lBuilding.TipButtons.Offset = {0, 45};
  lBuilding.TipButtons.OffsetByzantine = {0, 45};
  lBuilding.TipButtons.bIsInnerBuilding = false;
  lBuilding.TipButtons.bCanBuild = 0;

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