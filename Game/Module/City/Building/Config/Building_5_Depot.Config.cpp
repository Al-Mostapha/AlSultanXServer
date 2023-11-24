#include "Building.Config.h"

void CBuilding::InitDepot(){
  QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Depot, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Depot]; // 105
  lBuilding.index = 5;
  lBuilding.BuildingID = EBuilding::Depot; // 105
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = true;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;

  lBuilding.BuildingName = "buildDes_name_105";
  lBuilding.BuildingIcon = "quest_building_105.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_105";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_105";

  lBuilding.TipButtons.bid = 105;
  lBuilding.TipButtons.BuildingName = "buildDes_name_105";
  lBuilding.TipButtons.PicFile = "pic404000_2.png";
  lBuilding.TipButtons.ImgFile = "building_005.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = false;
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