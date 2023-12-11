#include "Building.Config.h"

void CBuilding::InitArrowTower(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::ArrowTower, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::ArrowTower]; // 103
  lBuilding.index = 3;
  lBuilding.buildingID = EBuilding::ArrowTower; // 103
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 7;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 2;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 130;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = true;
  lBuilding.maxStarLv = 70;
  lBuilding.addmaxstarlv = 70;

  lBuilding.BuildingName = "buildDes_name_103";
  lBuilding.BuildingIcon = "quest_building_103.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_103";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_103";

  lBuilding.TipButtons.bid = 103;
  lBuilding.TipButtons.BuildingName = "buildDes_name_103";
  lBuilding.TipButtons.PicFile = "UnDefined.png";
  lBuilding.TipButtons.ImgFile = "jianta_2.png";
  lBuilding.TipButtons.Offset = { 0, -90};
  lBuilding.TipButtons.OffsetByzantine = {0, -90};
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