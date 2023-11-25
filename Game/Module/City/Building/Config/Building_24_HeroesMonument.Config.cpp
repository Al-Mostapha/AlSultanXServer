#include "Building.Config.h"

void CBuilding::InitHeroesMonument(){
    QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::HeroesMonument, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::HeroesMonument]; // 124
  lBuilding.index = 33;
  lBuilding.oldUnlocklevel = 16;
  lBuilding.oldShowlevel = 16;
  lBuilding.unlocklevel = 23;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
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
  
  lBuilding.BuildingName = "buildDes_name_124";
  lBuilding.BuildingIcon = "quest_building_124.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_124";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_124";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 124;
  lBuilding.TipButtons.BuildingName = "buildDes_name_124";
  lBuilding.TipButtons.PicFile = "pic407000_2.png";
  lBuilding.TipButtons.ImgFile = "building_007.png";
  lBuilding.TipButtons.Offset = {0, -110};
  lBuilding.TipButtons.OffsetByzantine = {0, -110};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpMonument,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpMonument,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpMonument,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}