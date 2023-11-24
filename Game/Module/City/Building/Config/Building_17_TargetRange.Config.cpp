#include "Building.Config.h"

void CBuilding::InitTargetRange(){
    QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::TargetRange, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::TargetRange]; // 117
  lBuilding.index = 17;
  lBuilding.oldUnlocklevel = 3;
  lBuilding.oldShowlevel = 3;
  lBuilding.unlocklevel = 1;
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
  
  lBuilding.BuildingName = "buildDes_name_117";
  lBuilding.BuildingIcon = "quest_building_117.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_117";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_117";
  lBuilding.Describe = "buildDes_describe_117";
  lBuilding.WarDescribe = "buildDes_war_describe_02";
  lBuilding.StarDescribe = "Glory_text_06";

    lBuilding.TipButtons.bid = 117;
    lBuilding.TipButtons.BuildingName = "buildDes_name_117";
    lBuilding.TipButtons.PicFile = "pic425000_2.png";
    lBuilding.TipButtons.ImgFile = "building_011.png";
    lBuilding.TipButtons.Offset = {0, -30};
    lBuilding.TipButtons.OffsetByzantine = {0, -30};
    lBuilding.TipButtons.bIsInnerBuilding = true;
    lBuilding.TipButtons.bCanBuild = 1;
    lBuilding.TipButtons.NormalOperateList = {
      EBuildingTips::OpDetails,
      EBuildingTips::OpUpgrade,
      EBuildingTips::OpTrain,
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
      EBuildingTips::OpTrain,
      EBuildingTips::OpNone,
      EBuildingTips::OpNone
    };
}