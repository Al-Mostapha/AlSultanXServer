#include "Building.Config.h"

void CBuilding::InitFirstAidTent(){
    QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::FirstAidTent, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::FirstAidTent]; // 206
  lBuilding.index = 28;
  lBuilding.oldUnlocklevel = 4;
  lBuilding.oldShowlevel = 4;
  lBuilding.unlocklevel = 4;
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
  
  lBuilding.BuildingName = "buildDes_name_206";
  lBuilding.BuildingIcon = "quest_building_206.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_206";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_206";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_206";

  lBuilding.TipButtons.bid = 206;
  lBuilding.TipButtons.BuildingName = "buildDes_name_206";
  lBuilding.TipButtons.PicFile = "pic411000_2.png";
  lBuilding.TipButtons.ImgFile = "building_020.png";
  lBuilding.TipButtons.Offset = {0, -15};
  lBuilding.TipButtons.OffsetByzantine = {0, -15};
  lBuilding.TipButtons.bIsInnerBuilding = false;
  lBuilding.TipButtons.bCanBuild = 2;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpHeal,
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
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };

}