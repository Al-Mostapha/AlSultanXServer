#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitTreasurePool(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::TreasurePool, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::TreasurePool]; // 114
  lBuilding.index = 14;
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 11;
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
  
  lBuilding.BuildingName = "buildDes_name_114";
  lBuilding.BuildingIcon = "quest_building_114.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_114";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_114";
  lBuilding.Describe = "buildDes_describe_114";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_114";

  lBuilding.TipButtons.bid = 114;
  lBuilding.TipButtons.BuildingName = "buildDes_name_114";
  lBuilding.TipButtons.PicFile = "pic428000_2.png";
  lBuilding.TipButtons.ImgFile = "building_013.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpWish,
    EBuildingTips::OpEndlessTreasure,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpWish,
    EBuildingTips::OpEndlessTreasure,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpWish,
    EBuildingTips::OpEndlessTreasure,
    EBuildingTips::OpNone
  };
}