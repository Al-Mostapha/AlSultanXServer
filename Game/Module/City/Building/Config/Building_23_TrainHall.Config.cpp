#include "Building.Config.h"

void CBuilding::InitTrainHall(){
  _BuildingSpecs[EBuilding::TrainHall] =  {}; // 123
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::TrainHall]; // 123
  lBuilding.index = 32;
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 13;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = true;
  lBuilding.isBuild = true;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 30;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
  
  lBuilding.BuildingName = "buildDes_name_123";
  lBuilding.BuildingIcon = "quest_building_123.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_123";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_123";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 123;
  lBuilding.TipButtons.BuildingName = "buildDes_name_123";
  lBuilding.TipButtons.PicFile = "pic407000_2.png";
  lBuilding.TipButtons.ImgFile = "building_007.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpTrainHall,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpTrainHall,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpTrainHall,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}