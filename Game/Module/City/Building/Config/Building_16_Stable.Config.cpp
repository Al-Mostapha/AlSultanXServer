#include "Building.Config.h"

void CBuilding::InitStable(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Stable, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Stable]; // 116
  lBuilding.index = 16;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
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
  
  lBuilding.BuildingName = "buildDes_name_116";
  lBuilding.BuildingIcon = "quest_building_116.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_116";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_116";
  lBuilding.Describe = "buildDes_describe_116";
  lBuilding.WarDescribe = "buildDes_war_describe_01";
  lBuilding.StarDescribe = "Glory_text_05";

  lBuilding.TipButtons.bid = 116;
  lBuilding.TipButtons.BuildingName = "buildDes_name_116";
  lBuilding.TipButtons.PicFile = "pic424000_2.png";
  lBuilding.TipButtons.PicFile = "building_012.png";
  lBuilding.TipButtons.Offset = { 0, -30 };
  lBuilding.TipButtons.OffsetByzantine = {40, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpTrain,
    EBuildingTips::OpNone,
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
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpTrain,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}