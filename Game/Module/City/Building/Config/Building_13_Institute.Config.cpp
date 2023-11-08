#include "Building.Config.h"

void CBuilding::InitInstitute(){
  _BuildingSpecs[EBuilding::Institute] =  {}; // 113
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::Institute]; // 113
  lBuilding.index = 13;
  lBuilding.oldUnlocklevel = 2;
  lBuilding.oldShowlevel = 2;
  lBuilding.unlocklevel = 4;
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
  
  lBuilding.BuildingName = "buildDes_name_113";
  lBuilding.BuildingIcon = "quest_building_113.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_113";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_113";
  lBuilding.Describe = "buildDes_describe_113";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_113";

  lBuilding.TipButtons.bid = 113;
  lBuilding.TipButtons.BuildingName = "buildDes_name_113";
  lBuilding.TipButtons.PicFile = "pic403000_2.png";
  lBuilding.TipButtons.ImgFile = "building_002.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpResearch,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
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
    EBuildingTips::OpResearch,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}