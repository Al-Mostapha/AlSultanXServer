#include "Building.Config.h"

void CBuilding::InitEmbassy(){
  QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Embassy, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Embassy]; // 111
  lBuilding.index = 11;
  lBuilding.oldUnlocklevel = 6;
  lBuilding.oldShowlevel = 6;
  lBuilding.unlocklevel = 8;
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
  
  lBuilding.BuildingName = "buildDes_name_111";
  lBuilding.BuildingIcon = "quest_building_111.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_111";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_111";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_111";

  lBuilding.TipButtons.bid = 111;
  lBuilding.TipButtons.BuildingName = "buildDes_name_111";
  lBuilding.TipButtons.PicFile = "pic402000_2.png";
  lBuilding.TipButtons.ImgFile = "building_009.png";
  lBuilding.TipButtons.Offset = { 0, -30 };
  lBuilding.TipButtons.OffsetByzantine = { 0,-30};
  lBuilding.TipButtons.bIsInnerBuilding = 1;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpHelp,
    EBuildingTips::OpReinforcements,
    EBuildingTips::OpIntetior
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpHelp,
    EBuildingTips::OpReinforcements,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}