#include "Building.Config.h"

void CBuilding::InitSilverMine(){
    QSharedPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
_BuildingSpecs.insert(EBuilding::SilverMine, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::SilverMine]; // 204
  lBuilding.index = 26;
  lBuilding.oldUnlocklevel = 15;
  lBuilding.oldShowlevel = 15;
  lBuilding.unlocklevel = 15;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Outer;
  lBuilding.maxCount = 8;
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
  
  lBuilding.BuildingName = "buildDes_name_204";
  lBuilding.BuildingIcon = "quest_building_204.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_204";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_204";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_204";

  lBuilding.TipButtons.bid = 204;
  lBuilding.TipButtons.BuildingName = "buildDes_name_204";
  lBuilding.TipButtons.PicFile = "miyinkuangchang.png";
  lBuilding.TipButtons.ImgFile = "building_019.png";
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