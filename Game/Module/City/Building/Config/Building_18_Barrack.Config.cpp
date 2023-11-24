#include "Building.Config.h"

void CBuilding::InitBarrack(){
    QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::Barrack, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Barrack]; // 118
  lBuilding.index = 18;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
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
  
  lBuilding.BuildingName = "buildDes_name_118";
  lBuilding.BuildingIcon = "quest_building_118.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_118";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_118";
  lBuilding.Describe = "buildDes_describe_118";
  lBuilding.WarDescribe = "buildDes_war_describe_03";
  lBuilding.StarDescribe = "Glory_text_04";

  lBuilding.TipButtons.bid = 118;
  lBuilding.TipButtons.BuildingName = "buildDes_name_118";
  lBuilding.TipButtons.PicFile = "pic423000_2.png";
  lBuilding.TipButtons.ImgFile = "ImgFile.png";
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