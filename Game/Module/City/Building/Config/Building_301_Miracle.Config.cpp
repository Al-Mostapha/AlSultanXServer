#include "Building.Config.h"

void CBuilding::InitMiracle(){
  _BuildingSpecs[EBuilding::Miracle] =  {}; // 301
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::Miracle]; // 301
  lBuilding.index = 29;
  lBuilding.oldUnlocklevel = 30;
  lBuilding.oldShowlevel = 30;
  lBuilding.unlocklevel = 30;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Fixed;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = true;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 30;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;
  
  lBuilding.BuildingName = "buildDes_name_301";
  lBuilding.BuildingIcon = "quest_building_301.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_301";
  lBuilding.UpgradeBrief = "buildDes_describe_301";
  lBuilding.Describe = "buildDes_describe_301";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_301";
    
  lBuilding.TipButtons.bid = 301;
  lBuilding.TipButtons.BuildingName = "buildDes_name_301";
  lBuilding.TipButtons.PicFile = "BG_statue.png";
  lBuilding.TipButtons.ImgFile = "BG_statue.png";
  lBuilding.TipButtons.Offset = {0, 0};
  lBuilding.TipButtons.OffsetByzantine = {0, 0};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 0;

  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpWar,
    EBuildingTips::OpWarGem,
    EBuildingTips::OpWarTechnology,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpWarGem,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpWarGem,
    EBuildingTips::OpWarTechnology,
    EBuildingTips::OpNone
  };
}