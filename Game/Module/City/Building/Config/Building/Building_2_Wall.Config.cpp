#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitWall(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs) ;
  _BuildingSpecs.insert(EBuilding::Wall, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Wall];
  lBuilding.index = 2;
  lBuilding.buildingID = EBuilding::Wall;
  lBuilding.oldUnlocklevel = 1;
  lBuilding.oldShowlevel = 1;
  lBuilding.unlocklevel = 1;
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
  lBuilding.BuildingName = "buildDes_name_102";
  lBuilding.BuildingIcon = "quest_building_102.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_102";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_102" ;
  lBuilding.TipButtons.bid = 102;
  lBuilding.TipButtons.BuildingName = "buildDes_name_102";
  lBuilding.TipButtons.PicFile = "UnDefined.png";
  lBuilding.TipButtons.ImgFile = "chengmen_3.png";
  lBuilding.TipButtons.Offset = {20, -90};
  lBuilding.TipButtons.OffsetByzantine = {20, -90};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = false;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpDefend,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };
  lBuilding.TipButtons.CoolingOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpSpeedUpByGold,
    EBuildingTips::OpDefend,
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
  
  lBuilding.Lvls[1] = {}; // index = 1,
  RBuildingLvlSpecs &lBuildingLvl = lBuilding.Lvls[1];
  lBuilding.Lvls[1].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[1].lvl = 1; 
  lBuilding.Lvls[1].kingdomLv = 0;
  lBuilding.Lvls[1].PreCond = {};
  lBuilding.Lvls[1].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 0 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[1].CostTime = 0;
  lBuilding.Lvls[1].Reword.Exp = 0;
  lBuilding.Lvls[1].kingdomPoint = 0;
  lBuilding.Lvls[1].Reword.Power = 10;
  lBuilding.Lvls[1].capacity = 1000;
  lBuilding.Lvls[1].defValue = 8000;

  lBuilding.Lvls[2] = {}; // index = 2,
  lBuilding.Lvls[2].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[2].lvl = 2; 
  lBuilding.Lvls[2].kingdomLv = 0;
  lBuilding.Lvls[2].PreCond = {
    {EBuilding::Castle, 2}
  };
  lBuilding.Lvls[2].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2500 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[2].CostTime = 150;
  lBuilding.Lvls[2].Reword.Exp = 11;
  lBuilding.Lvls[2].kingdomPoint = 35;
  lBuilding.Lvls[2].Reword.Power = 35;
  lBuilding.Lvls[2].capacity = 2000;
  lBuilding.Lvls[2].defValue = 8100;

  lBuilding.Lvls[3] = {}; // index = 3,
  lBuilding.Lvls[3].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[3].lvl = 3; 
  lBuilding.Lvls[3].kingdomLv = 0;
  lBuilding.Lvls[3].PreCond = {
    {EBuilding::Castle, 3}
  };
  lBuilding.Lvls[3].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 3500 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[3].CostTime = 300;
  lBuilding.Lvls[3].Reword.Exp = 18;
  lBuilding.Lvls[3].kingdomPoint = 73;
  lBuilding.Lvls[3].Reword.Power = 70;
  lBuilding.Lvls[3].capacity = 3000;
  lBuilding.Lvls[3].defValue = 8200;

  lBuilding.Lvls[4] = {}; // index = 4,
  lBuilding.Lvls[4].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[4].lvl = 4; 
  lBuilding.Lvls[4].kingdomLv = 0;
  lBuilding.Lvls[4].PreCond = {
    {EBuilding::Castle, 4}
  };
  lBuilding.Lvls[4].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 5000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[4].CostTime = 1200;
  lBuilding.Lvls[4].Reword.Exp = 59;
  lBuilding.Lvls[4].kingdomPoint = 301;
  lBuilding.Lvls[4].Reword.Power = 135;
  lBuilding.Lvls[4].capacity = 4000;
  lBuilding.Lvls[4].defValue = 8300;

  lBuilding.Lvls[5] = {};
  lBuilding.Lvls[5].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[5].lvl = 5; 
  lBuilding.Lvls[5].PreCond = {
    {EBuilding::Castle, 5}
  };
  lBuilding.Lvls[5].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 8000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[5].CostTime = 2880;
  lBuilding.Lvls[5].Reword.Exp = 114;
  lBuilding.Lvls[5].kingdomPoint = 746;
  lBuilding.Lvls[5].Reword.Power = 260;
  lBuilding.Lvls[5].capacity = 5000;
  lBuilding.Lvls[5].defValue = 8400;

  lBuilding.Lvls[6] = {};
  lBuilding.Lvls[6].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[6].lvl = 6; 
  lBuilding.Lvls[6].PreCond = {
    {EBuilding::Castle, 6}
  };
  lBuilding.Lvls[6].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13500 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[6].CostTime = 5760;
  lBuilding.Lvls[6].Reword.Exp = 224;
  lBuilding.Lvls[6].kingdomPoint = 1535;
  lBuilding.Lvls[6].Reword.Power = 465;
  lBuilding.Lvls[6].capacity = 6000;
  lBuilding.Lvls[6].defValue = 8500;

  lBuilding.Lvls[7] = {};
  lBuilding.Lvls[7].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[7].lvl = 7; 
  lBuilding.Lvls[7].PreCond = {
    {EBuilding::Castle, 7}
  };
  lBuilding.Lvls[7].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 28000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[7].CostTime = 11520;
  lBuilding.Lvls[7].Reword.Exp = 334;
  lBuilding.Lvls[7].kingdomPoint = 3156;
  lBuilding.Lvls[7].Reword.Power = 785;
  lBuilding.Lvls[7].capacity = 7000;
  lBuilding.Lvls[7].defValue = 8600;

  lBuilding.Lvls[8] = {};
  lBuilding.Lvls[8].BuildingID = EBuilding::Wall;
  lBuilding.Lvls[8].lvl = 8; 
  lBuilding.Lvls[8].PreCond = {
    {EBuilding::Castle, 8}
  };
  lBuilding.Lvls[8].CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 52000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuilding.Lvls[8].CostTime = 15840;
  lBuilding.Lvls[8].Reword.Exp = 457;
  lBuilding.Lvls[8].kingdomPoint = 4458;
  lBuilding.Lvls[8].Reword.Power = 1215;
  lBuilding.Lvls[8].capacity = 8000;
  lBuilding.Lvls[8].defValue = 8700;

  lBuilding.Lvls[9] = {};
  lBuildingLvl = lBuilding.Lvls[9];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 9; 
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 9}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 103500 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 21360;
  lBuildingLvl.Reword.Exp = 615;
  lBuildingLvl.kingdomPoint = 6170;
  lBuildingLvl.Reword.Power = 1720;
  lBuildingLvl.capacity = 9000;
  lBuildingLvl.defValue = 8800;
  
  // [10] = {
  lBuilding.Lvls[10] = {};
  lBuildingLvl = lBuilding.Lvls[10];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 10;
    lBuildingLvl.PreCond = {
    {EBuilding::Castle, 10}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 200000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 29040;
  lBuildingLvl.Reword.Exp = 834;
  lBuildingLvl.kingdomPoint = 8603;
  lBuildingLvl.Reword.Power = 2320;
  lBuildingLvl.capacity = 10000;
  lBuildingLvl.defValue = 8900;

  // [11] = {
  lBuilding.Lvls[11] = {};
  lBuildingLvl = lBuilding.Lvls[11];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 11;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 11}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 320000},
    { EResource::Iron, 12800 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 39360;
  lBuildingLvl.Reword.Exp = 1129;
  lBuildingLvl.kingdomPoint = 11953;
  lBuildingLvl.Reword.Power = 3020;
  lBuildingLvl.capacity = 11000;
  lBuildingLvl.defValue = 9000;

  // [12] = {
  lBuilding.Lvls[12] = {};
  lBuildingLvl = lBuilding.Lvls[12];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 12;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 12}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 640000},
    { EResource::Iron, 25600 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 53520;
  lBuildingLvl.Reword.Exp = 1534;
  lBuildingLvl.kingdomPoint = 16650;
  lBuildingLvl.Reword.Power = 3880;
  lBuildingLvl.capacity = 12000;
  lBuildingLvl.defValue = 9200;

  // [13] = {
  lBuilding.Lvls[13] = {};
  lBuildingLvl = lBuilding.Lvls[13];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 13;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 13}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1224000},
    { EResource::Iron, 48900 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 72000;
  lBuildingLvl.Reword.Exp = 2062;
  lBuildingLvl.kingdomPoint = 22933;
  lBuildingLvl.Reword.Power = 4930;
  lBuildingLvl.capacity = 13000;
  lBuildingLvl.defValue = 9400;

  // [14] = {
  lBuilding.Lvls[14] = {};
  lBuildingLvl = lBuilding.Lvls[14];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 14;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 14}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2200000},
    { EResource::Iron, 88000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 97920;
  lBuildingLvl.Reword.Exp = 2802;
  lBuildingLvl.kingdomPoint = 31913;
  lBuildingLvl.Reword.Power = 6215;
  lBuildingLvl.capacity = 14000;
  lBuildingLvl.defValue = 9600;

  // [15] = {
  lBuilding.Lvls[15] = {};
  lBuildingLvl = lBuilding.Lvls[15];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 15;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 15}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 3360000},
    { EResource::Iron, 134400 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 132480;
  lBuildingLvl.Reword.Exp = 3790;
  lBuildingLvl.kingdomPoint = 44160;
  lBuildingLvl.Reword.Power = 7785;
  lBuildingLvl.capacity = 15000;
  lBuildingLvl.defValue = 9800;

  // [16] = {
  lBuilding.Lvls[16] = {};
  lBuildingLvl = lBuilding.Lvls[16];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 16;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 16}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 4400000},
    { EResource::Iron, 176000 },
    { EResource::Mithril, 14700 }
  };
  lBuildingLvl.CostTime = 178560;
  lBuildingLvl.Reword.Exp = 5106;
  lBuildingLvl.kingdomPoint = 60841;
  lBuildingLvl.Reword.Power = 9700;
  lBuildingLvl.capacity = 16000;
  lBuildingLvl.defValue = 10000;

  // [17] = {
  lBuilding.Lvls[17] = {};
  lBuildingLvl = lBuilding.Lvls[17];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 17;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 17}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 6160000},
    { EResource::Iron, 246400 },
    { EResource::Mithril, 20600 }
  };
  lBuildingLvl.CostTime = 241920;
  lBuildingLvl.Reword.Exp = 6917;
  lBuildingLvl.kingdomPoint = 84223;
  lBuildingLvl.Reword.Power = 12000;
  lBuildingLvl.capacity = 17000;
  lBuildingLvl.defValue = 10200;

  // [18] = {
  lBuilding.Lvls[18] = {};
  lBuildingLvl = lBuilding.Lvls[18];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 18;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 18}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 8000000},
    { EResource::Iron, 320000 },
    { EResource::Mithril, 26800 }
  };
  lBuildingLvl.CostTime = 276480;
  lBuildingLvl.Reword.Exp = 7904;
  lBuildingLvl.kingdomPoint = 98303;
  lBuildingLvl.Reword.Power = 14905;
  lBuildingLvl.capacity = 18000;
  lBuildingLvl.defValue = 10400;

  // [19] = {
  lBuilding.Lvls[19] = {};
  lBuildingLvl = lBuilding.Lvls[19];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 19;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 19}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 10400000},
    { EResource::Iron, 416000 },
    { EResource::Mithril, 34900 }
  };
  lBuildingLvl.CostTime = 311040;
  lBuildingLvl.Reword.Exp = 8891;
  lBuildingLvl.kingdomPoint = 112895;
  lBuildingLvl.Reword.Power = 18400;
  lBuildingLvl.capacity = 19000;
  lBuildingLvl.defValue = 10600;

  // [20] = {
  lBuilding.Lvls[20] = {};
  lBuildingLvl = lBuilding.Lvls[20];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 20;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 20}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 12800000},
    { EResource::Iron, 512000 },
    { EResource::Mithril, 43000 }
  };
  lBuildingLvl.CostTime = 354240;
  lBuildingLvl.Reword.Exp = 10126;
  lBuildingLvl.kingdomPoint = 131200;
  lBuildingLvl.Reword.Power = 22685;
  lBuildingLvl.capacity = 20000;
  lBuildingLvl.defValue = 10800;

  // [21] = {
  lBuilding.Lvls[21] = {};
  lBuildingLvl = lBuilding.Lvls[21];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 21;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 21}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 16000000},
    { EResource::Iron, 640000 },
    { EResource::Mithril, 53700 }
  };
  lBuildingLvl.CostTime = 406080;
  lBuildingLvl.Reword.Exp = 11607;
  lBuildingLvl.kingdomPoint = 150400;
  lBuildingLvl.Reword.Power = 27525;
  lBuildingLvl.capacity = 21000;
  lBuildingLvl.defValue = 11000;

  // [22] = {
  lBuilding.Lvls[22] = {};
  lBuildingLvl = lBuilding.Lvls[22];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 22;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 22}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20000000},
    { EResource::Iron, 800000 },
    { EResource::Mithril, 67200 }
  };
  lBuildingLvl.CostTime = 466560;
  lBuildingLvl.Reword.Exp = 13335;
  lBuildingLvl.kingdomPoint = 172800;
  lBuildingLvl.Reword.Power = 33020;
  lBuildingLvl.capacity = 22000;
  lBuildingLvl.defValue = 11300;

  // [23] = {
  lBuilding.Lvls[23] = {};
  lBuildingLvl = lBuilding.Lvls[23];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 23;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 23}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 24000000},
    { EResource::Iron, 960000 },
    { EResource::Mithril, 80600 }
  };
  lBuildingLvl.CostTime = 535680;
  lBuildingLvl.Reword.Exp = 15310;
  lBuildingLvl.kingdomPoint = 198400;
  lBuildingLvl.Reword.Power = 39250;
  lBuildingLvl.capacity = 23000;
  lBuildingLvl.defValue = 11600;

  // [24] = {
  lBuilding.Lvls[24] = {};
  lBuildingLvl = lBuilding.Lvls[24];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 24;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 24}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 32000000},
    { EResource::Iron, 1280000 },
    { EResource::Mithril, 107500 }
  };
  lBuildingLvl.CostTime = 616320;
  lBuildingLvl.Reword.Exp = 17614;
  lBuildingLvl.kingdomPoint = 228266;
  lBuildingLvl.Reword.Power = 46320;
  lBuildingLvl.capacity = 24000;
  lBuildingLvl.defValue = 11900;

  // [25] = {
  lBuilding.Lvls[25] = {};
  lBuildingLvl = lBuilding.Lvls[25];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 25;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 25}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 44000000},
    { EResource::Iron, 1760000 },
    { EResource::Mithril, 147800 }
  };
  lBuildingLvl.CostTime = 708480;
  lBuildingLvl.Reword.Exp = 20247;
  lBuildingLvl.kingdomPoint = 262400;
  lBuildingLvl.Reword.Power = 54335;
  lBuildingLvl.capacity = 25000;
  lBuildingLvl.defValue = 12200;

  // [26] = {
  lBuilding.Lvls[26] = {};
  lBuildingLvl = lBuilding.Lvls[26];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 26;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 26}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 60000000},
    { EResource::Iron, 2400000 },
    { EResource::Mithril, 201600 }
  };
  lBuildingLvl.CostTime = 812160;
  lBuildingLvl.Reword.Exp = 23209;
  lBuildingLvl.kingdomPoint = 300800;
  lBuildingLvl.Reword.Power = 63425;
  lBuildingLvl.capacity = 26000;
  lBuildingLvl.defValue = 12500;

  // [27] = {
  lBuilding.Lvls[27] = {};
  lBuildingLvl = lBuilding.Lvls[27];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 27;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 27}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 80000000},
    { EResource::Iron, 3200000 },
    { EResource::Mithril, 268800 }
  };
  lBuildingLvl.CostTime = 927360;
  lBuildingLvl.Reword.Exp = 26501;
  lBuildingLvl.kingdomPoint = 343466;
  lBuildingLvl.Reword.Power = 73730;
  lBuildingLvl.capacity = 27000;
  lBuildingLvl.defValue = 12800;

  // [28] = {
  lBuilding.Lvls[28] = {};
  lBuildingLvl = lBuilding.Lvls[28];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 28;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 28}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 104000000},
    { EResource::Iron, 4160000 },
    { EResource::Mithril, 349400 }
  };
  lBuildingLvl.CostTime = 1054080;
  lBuildingLvl.Reword.Exp = 30121;
  lBuildingLvl.kingdomPoint = 390400;
  lBuildingLvl.Reword.Power = 85420;
  lBuildingLvl.capacity = 28000;
  lBuildingLvl.defValue = 13100;

  // [29] = {
  lBuilding.Lvls[29] = {};
  lBuildingLvl = lBuilding.Lvls[29];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 29;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 29}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 136000000},
    { EResource::Iron, 5440000 },
    { EResource::Mithril, 456900 }
  };
  lBuildingLvl.CostTime = 1192320;
  lBuildingLvl.Reword.Exp = 34071;
  lBuildingLvl.kingdomPoint = 441600;
  lBuildingLvl.Reword.Power = 98675;
  lBuildingLvl.capacity = 29000;
  lBuildingLvl.defValue = 13400;

  // [30] = {
  lBuilding.Lvls[30] = {};
  lBuildingLvl = lBuilding.Lvls[30];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 30;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 30}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 176000000},
    { EResource::Iron, 7040000 },
    { EResource::Mithril, 591300 }
  };
  lBuildingLvl.CostTime = 1365120;
  lBuildingLvl.Reword.Exp = 39008;
  lBuildingLvl.kingdomPoint = 505600;
  lBuildingLvl.Reword.Power = 113705;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;

  // [31] = {
  lBuilding.Lvls[31] = {};
  lBuildingLvl = lBuilding.Lvls[31];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 31;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 12000000},
    { EResource::Iron, 1200000 },
    { EResource::Mithril, 600000 }
  };
  lBuildingLvl.CostTime = 72000;
  lBuildingLvl.Reword.Exp = 2405;
  lBuildingLvl.kingdomPoint = 26666;
  lBuildingLvl.Reword.Power = 115645;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 3}
  };
  // },
  // [32] = {
  lBuilding.Lvls[32] = {};
  lBuildingLvl = lBuilding.Lvls[32];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 32;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 12300000},
    { EResource::Iron, 1230000 },
    { EResource::Mithril, 615000 }
  };
  lBuildingLvl.CostTime = 79200;
  lBuildingLvl.Reword.Exp = 2645;
  lBuildingLvl.kingdomPoint = 29333;
  lBuildingLvl.Reword.Power = 117584;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 6}
  };
  // },
  // [33] = {
  lBuilding.Lvls[33] = {};
  lBuildingLvl = lBuilding.Lvls[33];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 33;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 12600000},
    { EResource::Iron, 1260000 },
    { EResource::Mithril, 630000 }
  };
  lBuildingLvl.CostTime = 86400;
  lBuildingLvl.Reword.Exp = 2885;
  lBuildingLvl.kingdomPoint = 32000;
  lBuildingLvl.Reword.Power = 119524;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 9}
  };
  // },
  // [34] = {
  lBuilding.Lvls[34] = {};
  lBuildingLvl = lBuilding.Lvls[34];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 34;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 12900000},
    { EResource::Iron, 1290000 },
    { EResource::Mithril, 645000 }
  };
  lBuildingLvl.CostTime = 93600;
  lBuildingLvl.Reword.Exp = 3125;
  lBuildingLvl.kingdomPoint = 34666;
  lBuildingLvl.Reword.Power = 121463;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 12}
  };
  // },
  // [35] = {
  lBuilding.Lvls[35] = {};
  lBuildingLvl = lBuilding.Lvls[35];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 35;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13200000},
    { EResource::Iron, 1320000 },
    { EResource::Mithril, 660000 }
  };
  lBuildingLvl.CostTime = 100800;
  lBuildingLvl.Reword.Exp = 3365;
  lBuildingLvl.kingdomPoint = 37333;
  lBuildingLvl.Reword.Power = 123403;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 15}
  };
  // },
  // [36] = {
  lBuilding.Lvls[36] = {};
  lBuildingLvl = lBuilding.Lvls[36];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 36;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13500000},
    { EResource::Iron, 1350000 },
    { EResource::Mithril, 675000 }
  };
  lBuildingLvl.CostTime = 108000;
  lBuildingLvl.Reword.Exp = 3605;
  lBuildingLvl.kingdomPoint = 40000;
  lBuildingLvl.Reword.Power = 125342;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 18}
  };
  // },
  // [37] = {
  lBuilding.Lvls[37] = {};
  lBuildingLvl = lBuilding.Lvls[37];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 37;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13800000},
    { EResource::Iron, 1380000 },
    { EResource::Mithril, 690000 }
  };
  lBuildingLvl.CostTime = 115200;
  lBuildingLvl.Reword.Exp = 3845;
  lBuildingLvl.kingdomPoint = 42666;
  lBuildingLvl.Reword.Power = 127282;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 21}
  };
  // },
  // [38] = {
  lBuilding.Lvls[38] = {};
  lBuildingLvl = lBuilding.Lvls[38];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 38;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 14100000},
    { EResource::Iron, 1410000 },
    { EResource::Mithril, 705000 }
  };
  lBuildingLvl.CostTime = 122400;
  lBuildingLvl.Reword.Exp = 4085;
  lBuildingLvl.kingdomPoint = 45333;
  lBuildingLvl.Reword.Power = 129221;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 24}
  };
  // },
  // [39] = {
  lBuilding.Lvls[39] = {};
  lBuildingLvl = lBuilding.Lvls[39];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 39;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 14400000},
    { EResource::Iron, 1440000 },
    { EResource::Mithril, 720000 }
  };
  lBuildingLvl.CostTime = 129600;
  lBuildingLvl.Reword.Exp = 4325;
  lBuildingLvl.kingdomPoint = 48000;
  lBuildingLvl.Reword.Power = 131161;
  lBuildingLvl.capacity = 30000;
  lBuildingLvl.defValue = 13700;
  lBuildingLvl.CostWEs = {
    {301101, 27}
  };
  // },
  // [40] = {
  lBuilding.Lvls[40] = {};
  lBuildingLvl = lBuilding.Lvls[40];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 40;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 40}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 14700000},
    { EResource::Iron, 1470000 },
    { EResource::Mithril, 735000 }
  };
  lBuildingLvl.CostTime = 136800;
  lBuildingLvl.Reword.Exp = 4565;
  lBuildingLvl.kingdomPoint = 50666;
  lBuildingLvl.Reword.Power = 133100;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 30}
  };
  // },
  // [41] = {
  lBuilding.Lvls[41] = {};
  lBuildingLvl = lBuilding.Lvls[41];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 41;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 15000000},
    { EResource::Iron, 1500000 },
    { EResource::Mithril, 750000 }
  };
  lBuildingLvl.CostTime = 144000;
  lBuildingLvl.Reword.Exp = 4805;
  lBuildingLvl.kingdomPoint = 53333;
  lBuildingLvl.Reword.Power = 136550;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 30}
  };
  // },
  // [42] = {
  lBuilding.Lvls[42] = {};
  lBuildingLvl = lBuilding.Lvls[42];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 42;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 15300000},
    { EResource::Iron, 1530000 },
    { EResource::Mithril, 765000 }
  };
  lBuildingLvl.CostTime = 151200;
  lBuildingLvl.Reword.Exp = 5045;
  lBuildingLvl.kingdomPoint = 56000;
  lBuildingLvl.Reword.Power = 140000;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 36}
  };
  // },
  // [43] = {
  lBuilding.Lvls[43] = {};
  lBuildingLvl = lBuilding.Lvls[43];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 43;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 15600000},
    { EResource::Iron, 1560000 },
    { EResource::Mithril, 780000 }
  };
  lBuildingLvl.CostTime = 158400;
  lBuildingLvl.Reword.Exp = 5285;
  lBuildingLvl.kingdomPoint = 58666;
  lBuildingLvl.Reword.Power = 143450;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 42}
  };
  // },
  // [44] = {
  lBuilding.Lvls[44] = {};
  lBuildingLvl = lBuilding.Lvls[44];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 44;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 15900000},
    { EResource::Iron, 1590000 },
    { EResource::Mithril, 795000 }
  };
  lBuildingLvl.CostTime = 165600;
  lBuildingLvl.Reword.Exp = 5525;
  lBuildingLvl.kingdomPoint = 61333;
  lBuildingLvl.Reword.Power = 146900;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 48}
  };
  // },
  // [45] = {
  lBuilding.Lvls[45] = {};
  lBuildingLvl = lBuilding.Lvls[45];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 45;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 16200000},
    { EResource::Iron, 1620000 },
    { EResource::Mithril, 810000 }
  };
  lBuildingLvl.CostTime = 172800;
  lBuildingLvl.Reword.Exp = 5765;
  lBuildingLvl.kingdomPoint = 64000;
  lBuildingLvl.Reword.Power = 150350;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 54}
  };
  // },
  // [46] = {
  lBuilding.Lvls[46] = {};
  lBuildingLvl = lBuilding.Lvls[46];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 46;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 16500000},
    { EResource::Iron, 1650000 },
    { EResource::Mithril, 825000 }
  };
  lBuildingLvl.CostTime = 180000;
  lBuildingLvl.Reword.Exp = 6005;
  lBuildingLvl.kingdomPoint = 66666;
  lBuildingLvl.Reword.Power = 153800;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 60}
  };
  // },
  // [47] = {
  lBuilding.Lvls[47] = {};
  lBuildingLvl = lBuilding.Lvls[47];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 47;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 16800000},
    { EResource::Iron, 1680000 },
    { EResource::Mithril, 840000 }
  };
  lBuildingLvl.CostTime = 187200;
  lBuildingLvl.Reword.Exp = 6245;
  lBuildingLvl.kingdomPoint = 69333;
  lBuildingLvl.Reword.Power = 157250;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 66}
  };
  // },
  // [48] = {
  lBuilding.Lvls[48] = {};
  lBuildingLvl = lBuilding.Lvls[48];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 48;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 17100000},
    { EResource::Iron, 1710000 },
    { EResource::Mithril, 855000 }
  };
  lBuildingLvl.CostTime = 194400;
  lBuildingLvl.Reword.Exp = 6485;
  lBuildingLvl.kingdomPoint = 72000;
  lBuildingLvl.Reword.Power = 160700;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 72}
  };
  // },
  // [49] = {
  lBuilding.Lvls[49] = {};
  lBuildingLvl = lBuilding.Lvls[49];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 49;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 17400000},
    { EResource::Iron, 1740000 },
    { EResource::Mithril, 870000 }
  };
  lBuildingLvl.CostTime = 201600;
  lBuildingLvl.Reword.Exp = 6725;
  lBuildingLvl.kingdomPoint = 74666;
  lBuildingLvl.Reword.Power = 164150;
  lBuildingLvl.capacity = 31000;
  lBuildingLvl.defValue = 14000;
  lBuildingLvl.CostWEs = {
    {301101, 78}
  };
  // },
  // [50] = {
  lBuilding.Lvls[50] = {};
  lBuildingLvl = lBuilding.Lvls[50];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 50;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 50}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 17700000},
    { EResource::Iron, 1770000 },
    { EResource::Mithril, 885000 }
  };
  lBuildingLvl.CostTime = 208800;
  lBuildingLvl.Reword.Exp = 6965;
  lBuildingLvl.kingdomPoint = 77333;
  lBuildingLvl.Reword.Power = 167600;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 84}
  };
  // },
  // [51] = {
  lBuilding.Lvls[51] = {};
  lBuildingLvl = lBuilding.Lvls[51];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 51;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 18000000},
    { EResource::Iron, 1800000 },
    { EResource::Mithril, 900000 }
  };
  lBuildingLvl.CostTime = 216000;
  lBuildingLvl.Reword.Exp = 7205;
  lBuildingLvl.kingdomPoint = 80000;
  lBuildingLvl.Reword.Power = 172500;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 93}
  };
  // },
  // [52] = {
  lBuilding.Lvls[52] = {};
  lBuildingLvl = lBuilding.Lvls[52];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 52;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 18300000},
    { EResource::Iron, 1830000 },
    { EResource::Mithril, 915000 }
  };
  lBuildingLvl.CostTime = 223200;
  lBuildingLvl.Reword.Exp = 7445;
  lBuildingLvl.kingdomPoint = 82666;
  lBuildingLvl.Reword.Power = 177400;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 102}
  };
  // },
  // [53] = {
  lBuilding.Lvls[53] = {};
  lBuildingLvl = lBuilding.Lvls[53];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 53;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 18600000},
    { EResource::Iron, 1860000 },
    { EResource::Mithril, 930000 }
  };
  lBuildingLvl.CostTime = 230400;
  lBuildingLvl.Reword.Exp = 7685;
  lBuildingLvl.kingdomPoint = 85333;
  lBuildingLvl.Reword.Power = 182300;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 111}
  };
  // },
  // [54] = {
  lBuilding.Lvls[54] = {};
  lBuildingLvl = lBuilding.Lvls[54];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 54;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 18900000},
    { EResource::Iron, 1890000 },
    { EResource::Mithril, 945000 }
  };
  lBuildingLvl.CostTime = 237600;
  lBuildingLvl.Reword.Exp = 7925;
  lBuildingLvl.kingdomPoint = 88000;
  lBuildingLvl.Reword.Power = 187200;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 120}
  };
  // },
  // [55] = {
  lBuilding.Lvls[55] = {};
  lBuildingLvl = lBuilding.Lvls[55];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 55;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 19200000},
    { EResource::Iron, 1920000 },
    { EResource::Mithril, 960000 }
  };
  lBuildingLvl.CostTime = 244800;
  lBuildingLvl.Reword.Exp = 8165;
  lBuildingLvl.kingdomPoint = 90666;
  lBuildingLvl.Reword.Power = 192100;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 129}
  };
  // },
  // [56] = {
  lBuilding.Lvls[56] = {};
  lBuildingLvl = lBuilding.Lvls[56];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 56;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 19500000},
    { EResource::Iron, 1950000 },
    { EResource::Mithril, 975000 }
  };
  lBuildingLvl.CostTime = 252000;
  lBuildingLvl.Reword.Exp = 8405;
  lBuildingLvl.kingdomPoint = 93333;
  lBuildingLvl.Reword.Power = 197000;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 138}
  };
  // },
  // [57] = {
  lBuilding.Lvls[57] = {};
  lBuildingLvl = lBuilding.Lvls[57];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 57;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 19800000},
    { EResource::Iron, 1980000 },
    { EResource::Mithril, 990000 }
  };
  lBuildingLvl.CostTime = 259200;
  lBuildingLvl.Reword.Exp = 8645;
  lBuildingLvl.kingdomPoint = 96000;
  lBuildingLvl.Reword.Power = 201900;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 147}
  };
  // },
  // [58] = {
  lBuilding.Lvls[58] = {};
  lBuildingLvl = lBuilding.Lvls[58];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 58;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20100000},
    { EResource::Iron, 2010000 },
    { EResource::Mithril, 1005000 }
  };
  lBuildingLvl.CostTime = 266400;
  lBuildingLvl.Reword.Exp = 8885;
  lBuildingLvl.kingdomPoint = 98666;
  lBuildingLvl.Reword.Power = 206800;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 156}
  };
  // },
  // [59] = {
  lBuilding.Lvls[59] = {};
  lBuildingLvl = lBuilding.Lvls[59];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 59;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20400000},
    { EResource::Iron, 2040000 },
    { EResource::Mithril, 1020000 }
  };
  lBuildingLvl.CostTime = 273600;
  lBuildingLvl.Reword.Exp = 9125;
  lBuildingLvl.kingdomPoint = 101333;
  lBuildingLvl.Reword.Power = 211700;
  lBuildingLvl.capacity = 32000;
  lBuildingLvl.defValue = 14300;
  lBuildingLvl.CostWEs = {
    {301101, 165}
  };
  // },
  // [60] = {
  lBuilding.Lvls[60] = {};
  lBuildingLvl = lBuilding.Lvls[60];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 60;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 60}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20700000},
    { EResource::Iron, 2070000 },
    { EResource::Mithril, 1035000 }
  };
  lBuildingLvl.CostTime = 280800;
  lBuildingLvl.Reword.Exp = 9365;
  lBuildingLvl.kingdomPoint = 104000;
  lBuildingLvl.Reword.Power = 216600;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 174}
  };
  // },
  // [61] = {
  lBuilding.Lvls[61] = {};
  lBuildingLvl = lBuilding.Lvls[61];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 61;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 21000000},
    { EResource::Iron, 2100000 },
    { EResource::Mithril, 1050000 }
  };
  lBuildingLvl.CostTime = 288000;
  lBuildingLvl.Reword.Exp = 9605;
  lBuildingLvl.kingdomPoint = 106666;
  lBuildingLvl.Reword.Power = 222950;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 180}
  };
  // },
  // [62] = {
  lBuilding.Lvls[62] = {};
  lBuildingLvl = lBuilding.Lvls[62];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 62;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 21300000},
    { EResource::Iron, 2130000 },
    { EResource::Mithril, 1065000 }
  };
  lBuildingLvl.CostTime = 295200;
  lBuildingLvl.Reword.Exp = 9845;
  lBuildingLvl.kingdomPoint = 109333;
  lBuildingLvl.Reword.Power = 229300;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 195}
  };
  // },
  // [63] = {
  lBuilding.Lvls[63] = {};
  lBuildingLvl = lBuilding.Lvls[63];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 63;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 21600000},
    { EResource::Iron, 2160000 },
    { EResource::Mithril, 1080000 }
  };
  lBuildingLvl.CostTime = 302400;
  lBuildingLvl.Reword.Exp = 10085;
  lBuildingLvl.kingdomPoint = 112000;
  lBuildingLvl.Reword.Power = 235650;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 210}
  };
  // },
  // [64] = {
  lBuilding.Lvls[64] = {};
  lBuildingLvl = lBuilding.Lvls[64];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 64;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 21900000},
    { EResource::Iron, 2190000 },
    { EResource::Mithril, 1095000 }
  };
  lBuildingLvl.CostTime = 309600;
  lBuildingLvl.Reword.Exp = 10325;
  lBuildingLvl.kingdomPoint = 114666;
  lBuildingLvl.Reword.Power = 242000;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 225}
  };
  // },
  // [65] = {
  lBuilding.Lvls[65] = {};
  lBuildingLvl = lBuilding.Lvls[65];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 65;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 22200000},
    { EResource::Iron, 2220000 },
    { EResource::Mithril, 1110000 }
  };
  lBuildingLvl.CostTime = 316800;
  lBuildingLvl.Reword.Exp = 10565;
  lBuildingLvl.kingdomPoint = 117333;
  lBuildingLvl.Reword.Power = 248350;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 240}
  };
  // },
  // [66] = {
  lBuilding.Lvls[66] = {};
  lBuildingLvl = lBuilding.Lvls[66];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 66;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 22500000},
    { EResource::Iron, 2250000 },
    { EResource::Mithril, 1125000 }
  };
  lBuildingLvl.CostTime = 324000;
  lBuildingLvl.Reword.Exp = 10805;
  lBuildingLvl.kingdomPoint = 120000;
  lBuildingLvl.Reword.Power = 254700;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 255}
  };
  // },
  // [67] = {
  lBuilding.Lvls[67] = {};
  lBuildingLvl = lBuilding.Lvls[67];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 67;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 22800000},
    { EResource::Iron, 2280000 },
    { EResource::Mithril, 1140000 }
  };
  lBuildingLvl.CostTime = 331200;
  lBuildingLvl.Reword.Exp = 11045;
  lBuildingLvl.kingdomPoint = 122666;
  lBuildingLvl.Reword.Power = 261050;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 270}
  };
  // },
  // [68] = {
  lBuilding.Lvls[68] = {};
  lBuildingLvl = lBuilding.Lvls[68];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 68;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 23100000},
    { EResource::Iron, 2310000 },
    { EResource::Mithril, 1155000 }
  };
  lBuildingLvl.CostTime = 338400;
  lBuildingLvl.Reword.Exp = 11285;
  lBuildingLvl.kingdomPoint = 125333;
  lBuildingLvl.Reword.Power = 267400;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 285}
  };
  // },
  // [69] = {
  lBuilding.Lvls[69] = {};
  lBuildingLvl = lBuilding.Lvls[69];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 69;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 23400000},
    { EResource::Iron, 2340000 },
    { EResource::Mithril, 1170000 }
  };
  lBuildingLvl.CostTime = 345600;
  lBuildingLvl.Reword.Exp = 11525;
  lBuildingLvl.kingdomPoint = 128000;
  lBuildingLvl.Reword.Power = 273750;
  lBuildingLvl.capacity = 33000;
  lBuildingLvl.defValue = 14600;
  lBuildingLvl.CostWEs = {
    {301101, 300}
  };
  // },
  // [70] = {
  lBuilding.Lvls[70] = {};
  lBuildingLvl = lBuilding.Lvls[70];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 70;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 70}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 23700000},
    { EResource::Iron, 2370000 },
    { EResource::Mithril, 1185000 }
  };
  lBuildingLvl.CostTime = 352800;
  lBuildingLvl.Reword.Exp = 11765;
  lBuildingLvl.kingdomPoint = 130666;
  lBuildingLvl.Reword.Power = 280100;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 315}
  };
  // },
  // [71] = {
  lBuilding.Lvls[71] = {};
  lBuildingLvl = lBuilding.Lvls[71];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 71;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 24000000},
    { EResource::Iron, 2400000 },
    { EResource::Mithril, 1200000 }
  };
  lBuildingLvl.CostTime = 360000;
  lBuildingLvl.Reword.Exp = 12005;
  lBuildingLvl.kingdomPoint = 133333;
  lBuildingLvl.Reword.Power = 287890;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 360}
  };
  // },
  // [72] = {
  lBuilding.Lvls[72] = {};
  lBuildingLvl = lBuilding.Lvls[72];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 72;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 24300000},
    { EResource::Iron, 2430000 },
    { EResource::Mithril, 1215000 }
  };
  lBuildingLvl.CostTime = 367200;
  lBuildingLvl.Reword.Exp = 12245;
  lBuildingLvl.kingdomPoint = 136000;
  lBuildingLvl.Reword.Power = 295680;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 390}
  };
  // },
  // [73] = {
  lBuilding.Lvls[73] = {};
  lBuildingLvl = lBuilding.Lvls[73];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 73;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 24600000},
    { EResource::Iron, 2460000 },
    { EResource::Mithril, 1230000 }
  };
  lBuildingLvl.CostTime = 374400;
  lBuildingLvl.Reword.Exp = 12485;
  lBuildingLvl.kingdomPoint = 138666;
  lBuildingLvl.Reword.Power = 303470;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 420}
  };
  // },
  // [74] = {
  lBuilding.Lvls[74] = {};
  lBuildingLvl = lBuilding.Lvls[74];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 74;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 24900000},
    { EResource::Iron, 2490000 },
    { EResource::Mithril, 1245000 }
  };
  lBuildingLvl.CostTime = 381600;
  lBuildingLvl.Reword.Exp = 12725;
  lBuildingLvl.kingdomPoint = 141333;
  lBuildingLvl.Reword.Power = 311260;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 450}
  };
  // },
  // [75] = {
  lBuilding.Lvls[75] = {};
  lBuildingLvl = lBuilding.Lvls[75];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 75;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 25200000},
    { EResource::Iron, 2520000 },
    { EResource::Mithril, 1260000 }
  };
  lBuildingLvl.CostTime = 388800;
  lBuildingLvl.Reword.Exp = 12965;
  lBuildingLvl.kingdomPoint = 144000;
  lBuildingLvl.Reword.Power = 319050;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 480}
  };
  // },
  // [76] = {
  lBuilding.Lvls[76] = {};
  lBuildingLvl = lBuilding.Lvls[76];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 76;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 25500000},
    { EResource::Iron, 2550000 },
    { EResource::Mithril, 1275000 }
  };
  lBuildingLvl.CostTime = 396000;
  lBuildingLvl.Reword.Exp = 13205;
  lBuildingLvl.kingdomPoint = 146666;
  lBuildingLvl.Reword.Power = 326840;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 510}
  };
  // },
  // [77] = {
  lBuilding.Lvls[77] = {};
  lBuildingLvl = lBuilding.Lvls[77];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 77;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 25800000},
    { EResource::Iron, 2580000 },
    { EResource::Mithril, 1290000 }
  };
  lBuildingLvl.CostTime = 403200;
  lBuildingLvl.Reword.Exp = 13445;
  lBuildingLvl.kingdomPoint = 149333;
  lBuildingLvl.Reword.Power = 334630;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 540}
  };
  // },
  // [78] = {
  lBuilding.Lvls[78] = {};
  lBuildingLvl = lBuilding.Lvls[78];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 78;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 26100000},
    { EResource::Iron, 2610000 },
    { EResource::Mithril, 1305000 }
  };
  lBuildingLvl.CostTime = 410400;
  lBuildingLvl.Reword.Exp = 13685;
  lBuildingLvl.kingdomPoint = 152000;
  lBuildingLvl.Reword.Power = 342420;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 570}
  };
  // },
  // [79] = {
  lBuilding.Lvls[79] = {};
  lBuildingLvl = lBuilding.Lvls[79];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 79;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 26400000},
    { EResource::Iron, 2640000 },
    { EResource::Mithril, 1320000 }
  };
  lBuildingLvl.CostTime = 417600;
  lBuildingLvl.Reword.Exp = 13925;
  lBuildingLvl.kingdomPoint = 154666;
  lBuildingLvl.Reword.Power = 350210;
  lBuildingLvl.capacity = 34000;
  lBuildingLvl.defValue = 14900;
  lBuildingLvl.CostWEs = {
    {301101, 600}
  };
  // },
  // [80] = {
  lBuilding.Lvls[80] = {};
  lBuildingLvl = lBuilding.Lvls[80];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 80;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 80}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 26700000},
    { EResource::Iron, 2670000 },
    { EResource::Mithril, 1335000 }
  };
  lBuildingLvl.CostTime = 424800;
  lBuildingLvl.Reword.Exp = 14165;
  lBuildingLvl.kingdomPoint = 157333;
  lBuildingLvl.Reword.Power = 358000;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301101, 630}
  };
  // },
  // [81] = {
  lBuilding.Lvls[81] = {};
  lBuildingLvl = lBuilding.Lvls[81];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 81;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 27000000},
    { EResource::Iron, 2700000 },
    { EResource::Mithril, 1350000 },
   { EResource::Crystal, 5000 }
  };
  lBuildingLvl.CostTime = 432000;
  lBuildingLvl.Reword.Exp = 14405;
  lBuildingLvl.kingdomPoint = 160000;
  lBuildingLvl.Reword.Power = 366770;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 125}
  };
  // },
  // [82] = {
  lBuilding.Lvls[82] = {};
  lBuildingLvl = lBuilding.Lvls[82];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 82;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 27600000},
    { EResource::Iron, 2730000 },
    { EResource::Mithril, 1365000 },
   { EResource::Crystal, 15000 }
  };
  lBuildingLvl.CostTime = 439200;
  lBuildingLvl.Reword.Exp = 14645;
  lBuildingLvl.kingdomPoint = 162666;
  lBuildingLvl.Reword.Power = 375540;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 150}
  };
  // },
  // [83] = {
  lBuilding.Lvls[83] = {};
  lBuildingLvl = lBuilding.Lvls[83];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 83;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 28200000},
    { EResource::Iron, 2760000 },
    { EResource::Mithril, 1380000 },
   { EResource::Crystal, 25000 }
  };
  lBuildingLvl.CostTime = 446400;
  lBuildingLvl.Reword.Exp = 14885;
  lBuildingLvl.kingdomPoint = 165333;
  lBuildingLvl.Reword.Power = 384310;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 175}
  };
  // },
  // [84] = {
  lBuilding.Lvls[84] = {};
  lBuildingLvl = lBuilding.Lvls[84];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 84;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 28800000},
    { EResource::Iron, 2790000 },
    { EResource::Mithril, 1395000 },
   { EResource::Crystal, 35000 }
  };
  lBuildingLvl.CostTime = 453600;
  lBuildingLvl.Reword.Exp = 15125;
  lBuildingLvl.kingdomPoint = 168000;
  lBuildingLvl.Reword.Power = 393080;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 200}
  };
  // },
  // [85] = {
  lBuilding.Lvls[85] = {};
  lBuildingLvl = lBuilding.Lvls[85];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 85;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 29400000},
    { EResource::Iron, 2820000 },
    { EResource::Mithril, 1410000 },
   { EResource::Crystal, 45000 }
  };
  lBuildingLvl.CostTime = 460800;
  lBuildingLvl.Reword.Exp = 15365;
  lBuildingLvl.kingdomPoint = 170666;
  lBuildingLvl.Reword.Power = 401850;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 225}
  };
  // },
  // [86] = {
  lBuilding.Lvls[86] = {};
  lBuildingLvl = lBuilding.Lvls[86];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 86;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 30000000},
    { EResource::Iron, 2850000 },
    { EResource::Mithril, 1425000 },
   { EResource::Crystal, 57500 }
  };
  lBuildingLvl.CostTime = 468000;
  lBuildingLvl.Reword.Exp = 15605;
  lBuildingLvl.kingdomPoint = 173333;
  lBuildingLvl.Reword.Power = 410620;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 250}
  };
  // },
  // [87] = {
  lBuilding.Lvls[87] = {};
  lBuildingLvl = lBuilding.Lvls[87];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 87;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 30600000},
    { EResource::Iron, 2880000 },
    { EResource::Mithril, 1440000 },
   { EResource::Crystal, 67500 }
  };
  lBuildingLvl.CostTime = 475200;
  lBuildingLvl.Reword.Exp = 15845;
  lBuildingLvl.kingdomPoint = 176000;
  lBuildingLvl.Reword.Power = 419390;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 275}
  };
  // },
  // [88] = {
  lBuilding.Lvls[88] = {};
  lBuildingLvl = lBuilding.Lvls[88];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 88;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 31200000},
    { EResource::Iron, 2910000 },
    { EResource::Mithril, 1455000 },
   { EResource::Crystal, 77500 }
  };
  lBuildingLvl.CostTime = 482400;
  lBuildingLvl.Reword.Exp = 16085;
  lBuildingLvl.kingdomPoint = 178666;
  lBuildingLvl.Reword.Power = 428160;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 300}
  };
  // },
  // [89] = {
  lBuilding.Lvls[89] = {};
  lBuildingLvl = lBuilding.Lvls[89];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 89;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 31800000},
    { EResource::Iron, 2940000 },
    { EResource::Mithril, 1470000 },
   { EResource::Crystal, 90000 }
  };
  lBuildingLvl.CostTime = 489600;
  lBuildingLvl.Reword.Exp = 16325;
  lBuildingLvl.kingdomPoint = 181333;
  lBuildingLvl.Reword.Power = 436930;
  lBuildingLvl.capacity = 35000;
  lBuildingLvl.defValue = 15200;
  lBuildingLvl.CostWEs = {
    {301901, 325}
  };
  // },
  // [90] = {
  lBuilding.Lvls[90] = {};
  lBuildingLvl = lBuilding.Lvls[90];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 90;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 90}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 32400000},
    { EResource::Iron, 2970000 },
    { EResource::Mithril, 1485000 },
   { EResource::Crystal, 100000 }
  };
  lBuildingLvl.CostTime = 496800;
  lBuildingLvl.Reword.Exp = 16565;
  lBuildingLvl.kingdomPoint = 184000;
  lBuildingLvl.Reword.Power = 445700;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 350}
  };
  // },
  // [91] = {
  lBuilding.Lvls[91] = {};
  lBuildingLvl = lBuilding.Lvls[91];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 91;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 33000000},
    { EResource::Iron, 3000000 },
    { EResource::Mithril, 1500000 },
   { EResource::Crystal, 112500 }
  };
  lBuildingLvl.CostTime = 504000;
  lBuildingLvl.Reword.Exp = 16805;
  lBuildingLvl.kingdomPoint = 186666;
  lBuildingLvl.Reword.Power = 454710;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 390}
  };
  // },
  // [92] = {
  lBuilding.Lvls[92] = {};
  lBuildingLvl = lBuilding.Lvls[92];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 92;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 33600000},
    { EResource::Iron, 3030000 },
    { EResource::Mithril, 1515000 },
   { EResource::Crystal, 125000 }
  };
  lBuildingLvl.CostTime = 511200;
  lBuildingLvl.Reword.Exp = 17045;
  lBuildingLvl.kingdomPoint = 189333;
  lBuildingLvl.Reword.Power = 463720;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 430}
  };
  // },
  // [93] = {
  lBuilding.Lvls[93] = {};
  lBuildingLvl = lBuilding.Lvls[93];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 93;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 34200000},
    { EResource::Iron, 3060000 },
    { EResource::Mithril, 1530000 },
   { EResource::Crystal, 137500 }
  };
  lBuildingLvl.CostTime = 518400;
  lBuildingLvl.Reword.Exp = 17285;
  lBuildingLvl.kingdomPoint = 192000;
  lBuildingLvl.Reword.Power = 472730;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 470}
  };
  // },
  // [94] = {
  lBuilding.Lvls[94] = {};
  lBuildingLvl = lBuilding.Lvls[94];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 94;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 34800000},
    { EResource::Iron, 3090000 },
    { EResource::Mithril, 1545000 },
   { EResource::Crystal, 150000 }
  };
  lBuildingLvl.CostTime = 525600;
  lBuildingLvl.Reword.Exp = 17525;
  lBuildingLvl.kingdomPoint = 194666;
  lBuildingLvl.Reword.Power = 481740;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 510}
  };
  // },
  // [95] = {
  lBuilding.Lvls[95] = {};
  lBuildingLvl = lBuilding.Lvls[95];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 95;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 35400000},
    { EResource::Iron, 3120000 },
    { EResource::Mithril, 1560000 },
   { EResource::Crystal, 162500 }
  };
  lBuildingLvl.CostTime = 532800;
  lBuildingLvl.Reword.Exp = 17765;
  lBuildingLvl.kingdomPoint = 197333;
  lBuildingLvl.Reword.Power = 490750;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 550}
  };
  
  lBuilding.Lvls[96] = {};
  lBuildingLvl = lBuilding.Lvls[96];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 96;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 36000000},
    { EResource::Iron, 3150000 },
    { EResource::Mithril, 1575000 },
   { EResource::Crystal, 175000 }
  };
  lBuildingLvl.CostTime = 540000;
  lBuildingLvl.Reword.Exp = 18005;
  lBuildingLvl.kingdomPoint = 200000;
  lBuildingLvl.Reword.Power = 499760;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 590}
  };
  // },
  // [97] = {
  lBuilding.Lvls[97] = {};
  lBuildingLvl = lBuilding.Lvls[97];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 97;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 36600000},
    { EResource::Iron, 3180000 },
    { EResource::Mithril, 1590000 },
   { EResource::Crystal, 187500 }
  };
  lBuildingLvl.CostTime = 547200;
  lBuildingLvl.Reword.Exp = 18245;
  lBuildingLvl.kingdomPoint = 202666;
  lBuildingLvl.Reword.Power = 508770;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 630}
  };
  // },
  // [98] = {
  lBuilding.Lvls[98] = {};
  lBuildingLvl = lBuilding.Lvls[98];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 98;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 37200000},
    { EResource::Iron, 3210000 },
    { EResource::Mithril, 1605000 },
   { EResource::Crystal, 200000 }
  };
  lBuildingLvl.CostTime = 554400;
  lBuildingLvl.Reword.Exp = 18485;
  lBuildingLvl.kingdomPoint = 205333;
  lBuildingLvl.Reword.Power = 517780;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 670}
  };
  // },
  // [99] = {
  lBuilding.Lvls[99] = {};
  lBuildingLvl = lBuilding.Lvls[99];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 99;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 37800000},
    { EResource::Iron, 3240000 },
    { EResource::Mithril, 1620000 },
   { EResource::Crystal, 215000 }
  };
  lBuildingLvl.CostTime = 561600;
  lBuildingLvl.Reword.Exp = 18725;
  lBuildingLvl.kingdomPoint = 208000;
  lBuildingLvl.Reword.Power = 526790;
  lBuildingLvl.capacity = 36000;
  lBuildingLvl.defValue = 15500;
  lBuildingLvl.CostWEs = {
    {301901, 710}
  };
  // },
  // [100] = {
  lBuilding.Lvls[100] = {};
  lBuildingLvl = lBuilding.Lvls[100];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 100;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 100}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 38400000},
    { EResource::Iron, 3270000 },
    { EResource::Mithril, 1635000 },
   { EResource::Crystal, 227500 }
  };
  lBuildingLvl.CostTime = 568800;
  lBuildingLvl.Reword.Exp = 18965;
  lBuildingLvl.kingdomPoint = 210666;
  lBuildingLvl.Reword.Power = 535800;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 750}
  };
  // },
  // [101] = {
  lBuilding.Lvls[101] = {};
  lBuildingLvl = lBuilding.Lvls[101];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 101;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 39000000},
    { EResource::Iron, 3300000 },
    { EResource::Mithril, 1650000 },
   { EResource::Crystal, 242500 }
  };
  lBuildingLvl.CostTime = 576000;
  lBuildingLvl.Reword.Exp = 19205;
  lBuildingLvl.kingdomPoint = 213333;
  lBuildingLvl.Reword.Power = 545790;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 800}
  };
  // },
  // [102] = {
  lBuilding.Lvls[102] = {};
  lBuildingLvl = lBuilding.Lvls[102];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 102;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 39600000},
    { EResource::Iron, 3330000 },
    { EResource::Mithril, 1665000 },
   { EResource::Crystal, 257500 }
  };
  lBuildingLvl.CostTime = 583200;
  lBuildingLvl.Reword.Exp = 19445;
  lBuildingLvl.kingdomPoint = 216000;
  lBuildingLvl.Reword.Power = 555780;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 850}
  };
  // },
  // [103] = {
  lBuilding.Lvls[103] = {};
  lBuildingLvl = lBuilding.Lvls[103];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 103;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 40200000},
    { EResource::Iron, 3360000 },
    { EResource::Mithril, 1680000 },
   { EResource::Crystal, 270000 }
  };
  lBuildingLvl.CostTime = 590400;
  lBuildingLvl.Reword.Exp = 19685;
  lBuildingLvl.kingdomPoint = 218666;
  lBuildingLvl.Reword.Power = 565770;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 900}
  };
  // },
  // [104] = {
  lBuilding.Lvls[104] = {};
  lBuildingLvl = lBuilding.Lvls[104];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 104;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 40800000},
    { EResource::Iron, 3390000 },
    { EResource::Mithril, 1695000 },
   { EResource::Crystal, 285000 }
  };
  lBuildingLvl.CostTime = 597600;
  lBuildingLvl.Reword.Exp = 19925;
  lBuildingLvl.kingdomPoint = 221333;
  lBuildingLvl.Reword.Power = 575760;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 950}
  };
  // },
  // [105] = {
  lBuilding.Lvls[105] = {};
  lBuildingLvl = lBuilding.Lvls[105];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 105;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 41400000},
    { EResource::Iron, 3420000 },
    { EResource::Mithril, 1710000 },
   { EResource::Crystal, 300000 }
  };
  lBuildingLvl.CostTime = 604800;
  lBuildingLvl.Reword.Exp = 20165;
  lBuildingLvl.kingdomPoint = 224000;
  lBuildingLvl.Reword.Power = 585750;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 1000}
  };
  // },
  // [106] = {
  lBuilding.Lvls[106] = {};
  lBuildingLvl = lBuilding.Lvls[106];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 106;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 42000000},
    { EResource::Iron, 3450000 },
    { EResource::Mithril, 1725000 },
   { EResource::Crystal, 315000 }
  };
  lBuildingLvl.CostTime = 612000;
  lBuildingLvl.Reword.Exp = 20405;
  lBuildingLvl.kingdomPoint = 226666;
  lBuildingLvl.Reword.Power = 595740;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 1050}
  };
  // },
  // [107] = {
  lBuilding.Lvls[107] = {};
  lBuildingLvl = lBuilding.Lvls[107];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 107;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 42600000},
    { EResource::Iron, 3480000 },
    { EResource::Mithril, 1740000 },
   { EResource::Crystal, 332500 }
  };
  lBuildingLvl.CostTime = 619200;
  lBuildingLvl.Reword.Exp = 20645;
  lBuildingLvl.kingdomPoint = 229333;
  lBuildingLvl.Reword.Power = 605730;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 1100}
  };
  // },
  // [108] = {
  lBuilding.Lvls[108] = {};
  lBuildingLvl = lBuilding.Lvls[108];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 108;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 43200000},
    { EResource::Iron, 3510000 },
    { EResource::Mithril, 1755000 },
   { EResource::Crystal, 347500 }
  };
  lBuildingLvl.CostTime = 626400;
  lBuildingLvl.Reword.Exp = 20885;
  lBuildingLvl.kingdomPoint = 232000;
  lBuildingLvl.Reword.Power = 615720;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 1150}
  };
  // },
  // [109] = {
  lBuilding.Lvls[109] = {};
  lBuildingLvl = lBuilding.Lvls[109];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 109;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 43800000},
    { EResource::Iron, 3540000 },
    { EResource::Mithril, 1770000 },
   { EResource::Crystal, 362500 }
  };
  lBuildingLvl.CostTime = 633600;
  lBuildingLvl.Reword.Exp = 21125;
  lBuildingLvl.kingdomPoint = 234666;
  lBuildingLvl.Reword.Power = 625710;
  lBuildingLvl.capacity = 37000;
  lBuildingLvl.defValue = 15800;
  lBuildingLvl.CostWEs = {
    {301901, 1200}
  };
  // },
  // [110] = {
  lBuilding.Lvls[110] = {};
  lBuildingLvl = lBuilding.Lvls[110];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 110;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 110}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 44400000},
    { EResource::Iron, 3570000 },
    { EResource::Mithril, 1785000 },
   { EResource::Crystal, 380000 }
  };
  lBuildingLvl.CostTime = 640800;
  lBuildingLvl.Reword.Exp = 21365;
  lBuildingLvl.kingdomPoint = 237333;
  lBuildingLvl.Reword.Power = 635700;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1250}
  };
  // },
  // [111] = {
  lBuilding.Lvls[111] = {};
  lBuildingLvl = lBuilding.Lvls[111];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 111;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 45000000},
    { EResource::Iron, 3600000 },
    { EResource::Mithril, 1800000 },
   { EResource::Crystal, 395000 }
  };
  lBuildingLvl.CostTime = 648000;
  lBuildingLvl.Reword.Exp = 21605;
  lBuildingLvl.kingdomPoint = 240000;
  lBuildingLvl.Reword.Power = 646660;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1310}
  };
  // },
  // [112] = {
  lBuilding.Lvls[112] = {};
  lBuildingLvl = lBuilding.Lvls[112];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 112;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 45600000},
    { EResource::Iron, 3630000 },
    { EResource::Mithril, 1815000 },
   { EResource::Crystal, 412500 }
  };
  lBuildingLvl.CostTime = 655200;
  lBuildingLvl.Reword.Exp = 21845;
  lBuildingLvl.kingdomPoint = 242666;
  lBuildingLvl.Reword.Power = 657620;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1370}
  };
  // },
  // [113] = {
  lBuilding.Lvls[113] = {};
  lBuildingLvl = lBuilding.Lvls[113];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 113;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 46200000},
    { EResource::Iron, 3660000 },
    { EResource::Mithril, 1830000 },
   { EResource::Crystal, 427500 }
  };
  lBuildingLvl.CostTime = 662400;
  lBuildingLvl.Reword.Exp = 22085;
  lBuildingLvl.kingdomPoint = 245333;
  lBuildingLvl.Reword.Power = 668580;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1430}
  };
  // },
  // [114] = {
  lBuilding.Lvls[114] = {};
  lBuildingLvl = lBuilding.Lvls[114];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 114;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 46800000},
    { EResource::Iron, 3690000 },
    { EResource::Mithril, 1845000 },
   { EResource::Crystal, 445000 }
  };
  lBuildingLvl.CostTime = 669600;
  lBuildingLvl.Reword.Exp = 22325;
  lBuildingLvl.kingdomPoint = 248000;
  lBuildingLvl.Reword.Power = 679540;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1490}
  };
  // },
  // [115] = {
  lBuilding.Lvls[115] = {};
  lBuildingLvl = lBuilding.Lvls[115];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 115;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 47400000},
    { EResource::Iron, 3720000 },
    { EResource::Mithril, 1860000 },
   { EResource::Crystal, 462500 }
  };
  lBuildingLvl.CostTime = 676800;
  lBuildingLvl.Reword.Exp = 22565;
  lBuildingLvl.kingdomPoint = 250666;
  lBuildingLvl.Reword.Power = 690500;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1550}
  };
  // },
  // [116] = {
  lBuilding.Lvls[116] = {};
  lBuildingLvl = lBuilding.Lvls[116];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 116;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 48000000},
    { EResource::Iron, 3750000 },
    { EResource::Mithril, 1875000 },
   { EResource::Crystal, 507000 }
  };
  lBuildingLvl.CostTime = 722200;
  lBuildingLvl.Reword.Exp = 22805;
  lBuildingLvl.kingdomPoint = 253333;
  lBuildingLvl.Reword.Power = 701460;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1700}
  };
  // },
  // [117] = {
  lBuilding.Lvls[117] = {};
  lBuildingLvl = lBuilding.Lvls[117];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 117;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 48600000},
    { EResource::Iron, 3780000 },
    { EResource::Mithril, 1890000 },
   { EResource::Crystal, 566000 }
  };
  lBuildingLvl.CostTime = 786400;
  lBuildingLvl.Reword.Exp = 23045;
  lBuildingLvl.kingdomPoint = 256000;
  lBuildingLvl.Reword.Power = 712420;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 1900}
  };
  // },
  // [118] = {
  lBuilding.Lvls[118] = {};
  lBuildingLvl = lBuilding.Lvls[118];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 118;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 49200000},
    { EResource::Iron, 3810000 },
    { EResource::Mithril, 1905000 },
   { EResource::Crystal, 625000 }
  };
  lBuildingLvl.CostTime = 847800;
  lBuildingLvl.Reword.Exp = 23285;
  lBuildingLvl.kingdomPoint = 258666;
  lBuildingLvl.Reword.Power = 723380;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 2100}
  };
  // },
  // [119] = {
  lBuilding.Lvls[119] = {};
  lBuildingLvl = lBuilding.Lvls[119];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 119;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 49800000},
    { EResource::Iron, 3840000 },
    { EResource::Mithril, 1920000 },
   { EResource::Crystal, 687000 }
  };
  lBuildingLvl.CostTime = 906600;
  lBuildingLvl.Reword.Exp = 23525;
  lBuildingLvl.kingdomPoint = 261333;
  lBuildingLvl.Reword.Power = 734340;
  lBuildingLvl.capacity = 38000;
  lBuildingLvl.defValue = 16100;
  lBuildingLvl.CostWEs = {
    {301901, 2300}
  };
  // },
  // [120] = {
  lBuilding.Lvls[120] = {};
  lBuildingLvl = lBuilding.Lvls[120];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 120;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 120}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 50400000},
    { EResource::Iron, 3870000 },
    { EResource::Mithril, 1935000 },
   { EResource::Crystal, 747000 }
  };
  lBuildingLvl.CostTime = 963200;
  lBuildingLvl.Reword.Exp = 23765;
  lBuildingLvl.kingdomPoint = 264000;
  lBuildingLvl.Reword.Power = 745300;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 2500}
  };
  // },
  // [121] = {
  lBuilding.Lvls[121] = {};
  lBuildingLvl = lBuilding.Lvls[121];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 121;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 51000000},
    { EResource::Iron, 3900000 },
    { EResource::Mithril, 1950000 },
   { EResource::Crystal, 822000 }
  };
  lBuildingLvl.CostTime = 1033900;
  lBuildingLvl.Reword.Exp = 24005;
  lBuildingLvl.kingdomPoint = 266666;
  lBuildingLvl.Reword.Power = 757240;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 2750}
  };
  // },
  // [122] = {
  lBuilding.Lvls[122] = {};
  lBuildingLvl = lBuilding.Lvls[122];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 122;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 51600000},
    { EResource::Iron, 3930000 },
    { EResource::Mithril, 1965000 },
   { EResource::Crystal, 894000 }
  };
  lBuildingLvl.CostTime = 1101800;
  lBuildingLvl.Reword.Exp = 24245;
  lBuildingLvl.kingdomPoint = 269333;
  lBuildingLvl.Reword.Power = 769180;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 3000}
  };
  // },
  // [123] = {
  lBuilding.Lvls[123] = {};
  lBuildingLvl = lBuilding.Lvls[123];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 123;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 52200000},
    { EResource::Iron, 3960000 },
    { EResource::Mithril, 1980000 },
   { EResource::Crystal, 969000 }
  };
  lBuildingLvl.CostTime = 1167100;
  lBuildingLvl.Reword.Exp = 24485;
  lBuildingLvl.kingdomPoint = 272000;
  lBuildingLvl.Reword.Power = 781120;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 3250}
  };
  // },
  // [124] = {
  lBuilding.Lvls[124] = {};
  lBuildingLvl = lBuilding.Lvls[124];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 124;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 52800000},
    { EResource::Iron, 3990000 },
    { EResource::Mithril, 1995000 },
   { EResource::Crystal, 1045000 }
  };
  lBuildingLvl.CostTime = 1230100;
  lBuildingLvl.Reword.Exp = 24725;
  lBuildingLvl.kingdomPoint = 274666;
  lBuildingLvl.Reword.Power = 793060;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 3500}
  };
  // },
  // [125] = {
  lBuilding.Lvls[125] = {};
  lBuildingLvl = lBuilding.Lvls[125];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 125;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 53400000},
    { EResource::Iron, 4020000 },
    { EResource::Mithril, 2010000 },
   { EResource::Crystal, 1116000 }
  };
  lBuildingLvl.CostTime = 1291000;
  lBuildingLvl.Reword.Exp = 24965;
  lBuildingLvl.kingdomPoint = 277333;
  lBuildingLvl.Reword.Power = 805000;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 3750}
  };
  // },
  // [126] = {
  lBuilding.Lvls[126] = {};
  lBuildingLvl = lBuilding.Lvls[126];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 126;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 54000000},
    { EResource::Iron, 4050000 },
    { EResource::Mithril, 2025000 },
    { EResource::Crystal, 1192000 }
  };
  lBuildingLvl.CostTime = 1350000;
  lBuildingLvl.Reword.Exp = 25205;
  lBuildingLvl.kingdomPoint = 280000;
  lBuildingLvl.Reword.Power = 816940;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 4000}
  };
  
  lBuilding.Lvls[127] = {};
  lBuildingLvl = lBuilding.Lvls[127];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 127;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 54600000},
    { EResource::Iron, 4080000 },
    { EResource::Mithril, 2040000 },
    { EResource::Crystal, 1268000 }
  };
  lBuildingLvl.CostTime = 1407200;
  lBuildingLvl.Reword.Exp = 25445;
  lBuildingLvl.kingdomPoint = 282666;
  lBuildingLvl.Reword.Power = 828880;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 4250}
  };
  
  lBuilding.Lvls[128] = {};
  lBuildingLvl = lBuilding.Lvls[128];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 128;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 55200000},
    { EResource::Iron, 4110000 },
    { EResource::Mithril, 2055000 },
   { EResource::Crystal, 1343000 }
  };
  lBuildingLvl.CostTime = 1462800;
  lBuildingLvl.Reword.Exp = 25685;
  lBuildingLvl.kingdomPoint = 285333;
  lBuildingLvl.Reword.Power = 840820;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 4500}
  };
  
  lBuilding.Lvls[129] = {};
  lBuildingLvl = lBuilding.Lvls[129];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 129;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 55800000},
    { EResource::Iron, 4140000 },
    { EResource::Mithril, 2070000 },
    { EResource::Crystal, 1424000 }
  };
  lBuildingLvl.CostTime = 1516900;
  lBuildingLvl.Reword.Exp = 25925;
  lBuildingLvl.kingdomPoint = 288000;
  lBuildingLvl.Reword.Power = 852760;
  lBuildingLvl.capacity = 39000;
  lBuildingLvl.defValue = 16400;
  lBuildingLvl.CostWEs = {
    {301901, 4750}
  };
  // },
  // [130] = {
  lBuilding.Lvls[130] = {};
  lBuildingLvl = lBuilding.Lvls[130];
  lBuildingLvl.BuildingID = EBuilding::Wall;
  lBuildingLvl.lvl = 130;
  lBuildingLvl.PreCond = {
    {EBuilding::Castle, 130}
  };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 56400000},
    { EResource::Iron, 4170000 },
    { EResource::Mithril, 2085000 },
   { EResource::Crystal, 1500000 }
  };
  lBuildingLvl.CostTime = 1569600;
  lBuildingLvl.Reword.Exp = 26165;
  lBuildingLvl.kingdomPoint = 290666;
  lBuildingLvl.Reword.Power = 864700;
  lBuildingLvl.capacity = 40000;
  lBuildingLvl.defValue = 16700;
  lBuildingLvl.CostWEs = {
    {301901, 5000}
  };
  // }

}