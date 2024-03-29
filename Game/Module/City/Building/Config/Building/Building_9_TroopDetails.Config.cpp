#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitTroopDetails(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::TroopDetails, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::TroopDetails]; // 109
  lBuilding.index = 9;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 1;
  lBuilding.isDemolish = false;
  lBuilding.isExchange = false;
  lBuilding.isBuild = false;
  lBuilding.isUpgrade = false;
  lBuilding.maxLvl = 1;
  lBuilding.initLvl = 1;
  lBuilding.openWl = true;
  lBuilding.openStar = false;
  lBuilding.maxStarLv = 0;
  lBuilding.addmaxstarlv = 0;

  lBuilding.BuildingName = "buildDes_name_109";
  lBuilding.BuildingIcon = "";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "";

  lBuilding.TipButtons.bid = 109;
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