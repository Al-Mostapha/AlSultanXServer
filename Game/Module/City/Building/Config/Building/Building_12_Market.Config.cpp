#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitMarket(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Market, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Market]; // 112
  lBuilding.index = 12;
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
  lBuilding.maxLvl = 30;
  lBuilding.initLvl = 1;
  lBuilding.openWl = false;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;
  
  lBuilding.BuildingName = "buildDes_name_112";
  lBuilding.BuildingIcon = "quest_building_112.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_112";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_112";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 112;
  lBuilding.TipButtons.BuildingName = "buildDes_name_112";
  lBuilding.TipButtons.PicFile = "pic401000_2.png";
  lBuilding.TipButtons.ImgFile = "building_010.png";
  lBuilding.TipButtons.Offset = { 0, -30 };
  lBuilding.TipButtons.OffsetByzantine = { 0,-30};
  lBuilding.TipButtons.bIsInnerBuilding = 1;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpTrade,
    EBuildingTips::OpAuction,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpTrade,
    EBuildingTips::OpAuction,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}