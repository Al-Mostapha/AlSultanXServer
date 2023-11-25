#include "Building.Config.h"

void CBuilding::InitElitePalace(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::ElitePalace, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::ElitePalace]; // 302
  lBuilding.index = 30;
  lBuilding.oldUnlocklevel = 16;
  lBuilding.oldShowlevel = 16;
  lBuilding.unlocklevel = 20;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Fixed;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 5;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
  
  lBuilding.BuildingName = "common_text_3129";
  lBuilding.BuildingIcon = "quest_building_302.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_302";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_302";
  lBuilding.Describe = "buildDes_describe_302";
  lBuilding.WarDescribe = "";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 302;
  lBuilding.TipButtons.BuildingName = "common_text_3129";
  lBuilding.TipButtons.PicFile = "jingyingdiantang.png";
  lBuilding.TipButtons.ImgFile = "jingyingdiantang.png";
  lBuilding.TipButtons.Offset = {0, 0};
  lBuilding.TipButtons.OffsetByzantine = {0, 0};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 0;
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