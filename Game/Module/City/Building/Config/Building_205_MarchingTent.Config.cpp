#include "Building.Config.h"

void CBuilding::InitMarchingTent(){
    QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::MarchingTent, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::MarchingTent]; // 205
  lBuilding.index = 27;
  lBuilding.oldUnlocklevel = 2;
  lBuilding.oldShowlevel = 2;
  lBuilding.unlocklevel = 1;
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
  
  lBuilding.BuildingName = "buildDes_name_205";
  lBuilding.BuildingIcon = "quest_building_205.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_205";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_205";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_205";

  lBuilding.TipButtons.bid = 205;
  lBuilding.TipButtons.BuildingName = "buildDes_name_205";
  lBuilding.TipButtons.PicFile = "pic410000_2.png";
  lBuilding.TipButtons.ImgFile = "building_017.png";
  lBuilding.TipButtons.Offset = {0, -15};
  lBuilding.TipButtons.OffsetByzantine = {0, -15};
  lBuilding.TipButtons.bIsInnerBuilding = false;
  lBuilding.TipButtons.bCanBuild = 2;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpNone,
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
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}