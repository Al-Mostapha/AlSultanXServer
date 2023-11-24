#include "Building.Config.h"

void CBuilding::InitFarm(){
    QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::HallOfWar, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::HallOfWar]; // 201
  lBuilding.index = 23;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Outer;
  lBuilding.maxCount = 10;
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
  
  lBuilding.BuildingName = "buildDes_name_201";
  lBuilding.BuildingIcon = "quest_building_201.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_201";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_201";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_201";

  lBuilding.TipButtons.bid = 201;
  lBuilding.TipButtons.BuildingName = "buildDes_name_201";
  lBuilding.TipButtons.PicFile = "nt_lvmiao02.png";
  lBuilding.TipButtons.ImgFile = "building_015.png";
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