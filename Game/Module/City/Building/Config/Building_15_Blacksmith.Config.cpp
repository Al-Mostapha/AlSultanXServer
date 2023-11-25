#include "Building.Config.h"

void CBuilding::InitBlacksmith(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Blacksmith, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Blacksmith]; // 115
  lBuilding.index = 15;
  lBuilding.oldUnlocklevel = 10;
  lBuilding.oldShowlevel = 10;
  lBuilding.unlocklevel = 10;
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
  
  lBuilding.BuildingName = "buildDes_name_115";
  lBuilding.BuildingIcon = "quest_building_115.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_115";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_115";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 115;
  lBuilding.TipButtons.BuildingName = "buildDes_name_115";
  lBuilding.TipButtons.PicFile = "pic429000_2.png";
  lBuilding.TipButtons.ImgFile = "building_014.png";
  lBuilding.TipButtons.Offset = { 0, -30 };
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpForging,
    EBuildingTips::OpStoragebox,
    EBuildingTips::OpArtifact
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpForging,
    EBuildingTips::OpStoragebox,
    EBuildingTips::OpArtifact
  };
}