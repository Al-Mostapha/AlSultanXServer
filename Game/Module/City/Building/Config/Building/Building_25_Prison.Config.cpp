#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitPrison(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::Prison, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Prison]; // 125
  lBuilding.index = 34;
  lBuilding.oldUnlocklevel = 16;
  lBuilding.oldShowlevel = 16;
  lBuilding.unlocklevel = 20;
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
  
  lBuilding.BuildingName = "buildDes_name_125";
  lBuilding.BuildingIcon = "quest_building_125.png";
  lBuilding.BuildingBrief = "buildDes_build_brief_125";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_125";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_125";

  lBuilding.TipButtons.bid = 125;
  lBuilding.TipButtons.BuildingName = "buildDes_name_125";
  lBuilding.TipButtons.PicFile = "pic407000_2.png";
  lBuilding.TipButtons.ImgFile = "building_007.png";
  lBuilding.TipButtons.Offset = {0, -30};
  lBuilding.TipButtons.OffsetByzantine = {0, -30};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = 1;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpPrison,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpPrison,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpPrison,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };

}