#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitWatchTower(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::WatchTower, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::WatchTower]; // 104
  lBuilding.index = 4;
  lBuilding.buildingID = EBuilding::WatchTower; // 104
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 5;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = true;
  lBuilding.maxLvl = 30;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;

  lBuilding.BuildingName = "buildDes_name_104";
  lBuilding.BuildingIcon = "quest_building_104.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "buildDes_upgrade_brief_104";
  lBuilding.Describe = "buildDes_describe_104";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";
  
  lBuilding.TipButtons.bid = 104;
  lBuilding.TipButtons.BuildingName = "buildDes_name_104";
  lBuilding.TipButtons.PicFile = "pic417000_2.png";
  lBuilding.TipButtons.ImgFile = "pic417000_2.png";
  lBuilding.TipButtons.Offset = {0, -115};
  lBuilding.TipButtons.OffsetByzantine = {0, -115};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = false;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails, EBuildingTips::OpUpgrade,
    EBuildingTips::OpMilitaryInfo, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails, EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpMilitaryInfo, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}