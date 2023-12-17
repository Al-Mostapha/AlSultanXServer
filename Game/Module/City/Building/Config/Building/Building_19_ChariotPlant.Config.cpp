#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitChariotPlant(){
    QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::ChariotPlant, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::ChariotPlant]; // 119
  lBuilding.index = 19;
  lBuilding.oldUnlocklevel = 4;
  lBuilding.oldShowlevel = 4;
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
  
  lBuilding.BuildingName = "buildDes_name_119";
  lBuilding.BuildingIcon = "quest_building_119.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_119";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_119";
  lBuilding.Describe = "buildDes_describe_119";
  lBuilding.WarDescribe = "buildDes_war_describe_04";
  lBuilding.StarDescribe = "Glory_text_07";

  lBuilding.TipButtons.bid = 119;
  lBuilding.TipButtons.BuildingName = "buildDes_name_119";
  lBuilding.TipButtons.PicFile = "pic412000_2.png";
  lBuilding.TipButtons.ImgFile = "building_004.png";
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