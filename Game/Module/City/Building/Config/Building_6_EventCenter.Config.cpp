#include "Building.Config.h"

void CBuilding::InitEventCenter(){
  _BuildingSpecs[EBuilding::EventCenter] =  {}; // 106
  RBuildingSpecs lBuilding = _BuildingSpecs[EBuilding::EventCenter]; // 106
  lBuilding.index = 6;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 7;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = false;
  lBuilding.maxLvl = 1;
  lBuilding.initLvl = 1;
  lBuilding.openWl = 1;
  lBuilding.openStar = 0;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;

  lBuilding.BuildingName = "buildDes_name_106";
  lBuilding.BuildingIcon = "";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 106;
  lBuilding.TipButtons.BuildingName = "";
  lBuilding.TipButtons.PicFile = "";
  lBuilding.TipButtons.ImgFile = "";
  lBuilding.TipButtons.Offset = {};
  lBuilding.TipButtons.OffsetByzantine = {};
  lBuilding.TipButtons.bIsInnerBuilding = 0;
  lBuilding.TipButtons.bCanBuild = 0;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.TrainingOperateList = {
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone, EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
}