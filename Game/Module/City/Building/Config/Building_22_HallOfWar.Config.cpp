#include "Building.Config.h"

void CBuilding::InitHallOfWar(){
  _BuildingSpecs[EBuilding::HallOfWar] =  {}; // 122
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::HallOfWar]; // 122
  lBuilding.index = 22;
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 8;
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
  
  lBuilding.BuildingName = "buildDes_name_122";
  lBuilding.BuildingIcon = "quest_building_122.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_122";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_122";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_122";

  lBuilding.TipButtons.bid = 122;
  lBuilding.TipButtons.BuildingName = "buildDes_name_122";
  lBuilding.TipButtons.PicFile = "pic407000_2.png";
  lBuilding.TipButtons.ImgFile = "building_007.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpAllianceBattle,
    EBuildingTips::OpMilitaryPoint,
    EBuildingTips::OpCounterSys
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpAllianceBattle,
    EBuildingTips::OpMilitaryPoint,
    EBuildingTips::OpCounterSys
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}