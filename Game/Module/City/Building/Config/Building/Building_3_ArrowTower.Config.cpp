#include "Module/City/Building/Config/Building.Config.h"

void CBuilding::InitArrowTower(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  _BuildingSpecs.insert(EBuilding::ArrowTower, lPointer);
  RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::ArrowTower]; // 103
  lBuilding.index = 3;
  lBuilding.buildingID = EBuilding::ArrowTower; // 103
  lBuilding.oldUnlocklevel = 7;
  lBuilding.oldShowlevel = 7;
  lBuilding.unlocklevel = 7;
  lBuilding.showlevel = 1;
  lBuilding.bType = EBuildingPlace::Inner;
  lBuilding.maxCount = 2;
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

  lBuilding.BuildingName = "buildDes_name_103";
  lBuilding.BuildingIcon = "quest_building_103.png";
  lBuilding.BuildingBrief = "";
  lBuilding.UpgradeBrief = "";
  lBuilding.Describe = "buildDes_describe_103";
  lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  lBuilding.StarDescribe = "star_describe_103";

  lBuilding.TipButtons.bid = 103;
  lBuilding.TipButtons.BuildingName = "buildDes_name_103";
  lBuilding.TipButtons.PicFile = "UnDefined.png";
  lBuilding.TipButtons.ImgFile = "jianta_2.png";
  lBuilding.TipButtons.Offset = { 0, -90};
  lBuilding.TipButtons.OffsetByzantine = {0, -90};
  lBuilding.TipButtons.bIsInnerBuilding = true;
  lBuilding.TipButtons.bCanBuild = false;
  lBuilding.TipButtons.NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpNone,
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
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone,
    EBuildingTips::OpNone
  };

  lBuilding.Lvls[1] = {}; // index = 1,
  RBuildingLvlSpecs &lBuildingLvl = lBuilding.Lvls[1];

  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 1; 
  lBuildingLvl.PreCond = {};
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 3000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 60;
  lBuildingLvl.Reword.Exp = 6;
  lBuildingLvl.kingdomPoint = 13;
  lBuildingLvl.Reword.Power = 2;
  lBuildingLvl.atkAdd = 1100;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1 } };

  // [2] = {
  lBuilding.Lvls[2] = {};
  lBuildingLvl = lBuilding.Lvls[2];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 2;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 5000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 90;
  lBuildingLvl.Reword.Exp = 7;
  lBuildingLvl.kingdomPoint = 20;
  lBuildingLvl.Reword.Power = 7;
  lBuildingLvl.atkAdd = 2200;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 2 } };

  // [3] = {
  lBuilding.Lvls[3] = {};
  lBuildingLvl = lBuilding.Lvls[3];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 3;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 7000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 150;
  lBuildingLvl.Reword.Exp = 10;
  lBuildingLvl.kingdomPoint = 36;
  lBuildingLvl.Reword.Power = 15;
  lBuildingLvl.atkAdd = 3400;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 4 } };

  // [4] = {
  lBuilding.Lvls[4] = {};
  lBuildingLvl = lBuilding.Lvls[4];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 4;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 9000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 450;
  lBuildingLvl.Reword.Exp = 25;
  lBuildingLvl.kingdomPoint = 113;
  lBuildingLvl.Reword.Power = 28;
  lBuildingLvl.atkAdd = 4800;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 8 } };

  // [5] = {
  lBuilding.Lvls[5] = {};
  lBuildingLvl = lBuilding.Lvls[5];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 5;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 1080;
  lBuildingLvl.Reword.Exp = 46;
  lBuildingLvl.kingdomPoint = 280;
  lBuildingLvl.Reword.Power = 54;
  lBuildingLvl.atkAdd = 6200;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 12 } };

  // [6] = {
  lBuilding.Lvls[6] = {};
  lBuildingLvl = lBuilding.Lvls[6];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 6;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 2160;
  lBuildingLvl.Reword.Exp = 87;
  lBuildingLvl.kingdomPoint = 575;
  lBuildingLvl.Reword.Power = 97;
  lBuildingLvl.atkAdd = 7800;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 20 } };

  // [7] = {
  lBuilding.Lvls[7] = {};
  lBuildingLvl = lBuilding.Lvls[7];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 7;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 7} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 38000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 4320;
  lBuildingLvl.Reword.Exp = 128;
  lBuildingLvl.kingdomPoint = 1183;
  lBuildingLvl.Reword.Power = 163;
  lBuildingLvl.atkAdd = 9400;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 30 } };

  // [8] = {
  lBuilding.Lvls[8] = {};
  lBuildingLvl = lBuilding.Lvls[8];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 8;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 8} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 42000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 5940;
  lBuildingLvl.Reword.Exp = 174;
  lBuildingLvl.kingdomPoint = 1671;
  lBuildingLvl.Reword.Power = 253;
  lBuildingLvl.atkAdd = 11200;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 50 } };

  // [9] = {
  lBuilding.Lvls[9] = {};
  lBuildingLvl = lBuilding.Lvls[9];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 9;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 9} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 45500},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 8010;
  lBuildingLvl.Reword.Exp = 233;
  lBuildingLvl.kingdomPoint = 2313;
  lBuildingLvl.Reword.Power = 359;
  lBuildingLvl.atkAdd = 13000;
  lBuildingLvl.atkSpeedAdd = 250;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 80 } };

  // [10] = {
  lBuilding.Lvls[10] = {};
  lBuildingLvl = lBuilding.Lvls[10];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 10;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 10} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 50000},
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 10890;
  lBuildingLvl.Reword.Exp = 316;
  lBuildingLvl.kingdomPoint = 3226;
  lBuildingLvl.Reword.Power = 483;
  lBuildingLvl.atkAdd = 15000;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 125 } };

  // [11] = {
  lBuilding.Lvls[11] = {};
  lBuildingLvl = lBuilding.Lvls[11];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 11;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 11} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 60000},
    { EResource::Iron, 5000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 14760;
  lBuildingLvl.Reword.Exp = 426;
  lBuildingLvl.kingdomPoint = 4481;
  lBuildingLvl.Reword.Power = 630;
  lBuildingLvl.atkAdd = 17000;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 175 } };

  // [12] = {
  lBuilding.Lvls[12] = {};
  lBuildingLvl = lBuilding.Lvls[12];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 12;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 12} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 80000},
    { EResource::Iron, 10000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 20070;
  lBuildingLvl.Reword.Exp = 578;
  lBuildingLvl.kingdomPoint = 6243;
  lBuildingLvl.Reword.Power = 809;
  lBuildingLvl.atkAdd = 19200;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 230 } };

  // [13] = {
  lBuilding.Lvls[13] = {};
  lBuildingLvl = lBuilding.Lvls[13];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 13;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 13} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 153000},
    { EResource::Iron, 19100 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 27000;
  lBuildingLvl.Reword.Exp = 776;
  lBuildingLvl.kingdomPoint = 8600;
  lBuildingLvl.Reword.Power = 1027;
  lBuildingLvl.atkAdd = 21400;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 290 } };

  // [14] = {
  lBuilding.Lvls[14] = {};
  lBuildingLvl = lBuilding.Lvls[14];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 14;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 14} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 275000},
    { EResource::Iron, 34300 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 36720;
  lBuildingLvl.Reword.Exp = 1054;
  lBuildingLvl.kingdomPoint = 11966;
  lBuildingLvl.Reword.Power = 1295;
  lBuildingLvl.atkAdd = 23800;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 355 } };

  // [15] = {
  lBuilding.Lvls[15] = {};
  lBuildingLvl = lBuilding.Lvls[15];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 15;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 15} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 420000},
    { EResource::Iron, 52500 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 49680;
  lBuildingLvl.Reword.Exp = 1424;
  lBuildingLvl.kingdomPoint = 16560;
  lBuildingLvl.Reword.Power = 1622;
  lBuildingLvl.atkAdd = 26200;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 425 } };

  // [16] = {
  lBuilding.Lvls[16] = {};
  lBuildingLvl = lBuilding.Lvls[16];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 16;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 16} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 550000},
    { EResource::Iron, 68700 },
    { EResource::Mithril, 9800 }
  };
  lBuildingLvl.CostTime = 66960;
  lBuildingLvl.Reword.Exp = 1918;
  lBuildingLvl.kingdomPoint = 22815;
  lBuildingLvl.Reword.Power = 2021;
  lBuildingLvl.atkAdd = 28800;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 500 } };

  // [17] = {
  lBuilding.Lvls[17] = {};
  lBuildingLvl = lBuilding.Lvls[17];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 17;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 17} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 770000},
    { EResource::Iron, 96200 },
    { EResource::Mithril, 13700 }
  };
  lBuildingLvl.CostTime = 90720;
  lBuildingLvl.Reword.Exp = 2597;
  lBuildingLvl.kingdomPoint = 31583;
  lBuildingLvl.Reword.Power = 2509;
  lBuildingLvl.atkAdd = 31400;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 580 } };

  // [18] = {
  lBuilding.Lvls[18] = {};
  lBuildingLvl = lBuilding.Lvls[18];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 18;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 18} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1000000},
    { EResource::Iron, 125000 },
    { EResource::Mithril, 17800 }
  };
  lBuildingLvl.CostTime = 103680;
  lBuildingLvl.Reword.Exp = 2967;
  lBuildingLvl.kingdomPoint = 36863;
  lBuildingLvl.Reword.Power = 3105;
  lBuildingLvl.atkAdd = 34200;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 665 } };

  // [19] = {
  lBuilding.Lvls[19] = {};
  lBuildingLvl = lBuilding.Lvls[19];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 19;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 19} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1300000},
    { EResource::Iron, 162500 },
    { EResource::Mithril, 23200 }
  };
  lBuildingLvl.CostTime = 116640;
  lBuildingLvl.Reword.Exp = 3337;
  lBuildingLvl.kingdomPoint = 42335;
  lBuildingLvl.Reword.Power = 3834;
  lBuildingLvl.atkAdd = 37000;
  lBuildingLvl.atkSpeedAdd = 430;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 755 } };

  // [20] = {
  lBuilding.Lvls[20] = {};
  lBuildingLvl = lBuilding.Lvls[20];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 20;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 20} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1600000},
    { EResource::Iron, 200000 },
    { EResource::Mithril, 28600 }
  };
  lBuildingLvl.CostTime = 132840;
  lBuildingLvl.Reword.Exp = 3800;
  lBuildingLvl.kingdomPoint = 49200;
  lBuildingLvl.Reword.Power = 4725;
  lBuildingLvl.atkAdd = 40000;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 850 } };

  // [21] = {
  lBuilding.Lvls[21] = {};
  lBuildingLvl = lBuilding.Lvls[21];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 21;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 21} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2000000},
    { EResource::Iron, 250000 },
    { EResource::Mithril, 35700 }
  };
  lBuildingLvl.CostTime = 152280;
  lBuildingLvl.Reword.Exp = 4355;
  lBuildingLvl.kingdomPoint = 56400;
  lBuildingLvl.Reword.Power = 5734;
  lBuildingLvl.atkAdd = 43000;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 950 } };

  // [22] = {
  lBuilding.Lvls[22] = {};
  lBuildingLvl = lBuilding.Lvls[22];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 22;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 22} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2500000},
    { EResource::Iron, 312500 },
    { EResource::Mithril, 44600 }
  };
  lBuildingLvl.CostTime = 174960;
  lBuildingLvl.Reword.Exp = 5003;
  lBuildingLvl.kingdomPoint = 64800;
  lBuildingLvl.Reword.Power = 6880;
  lBuildingLvl.atkAdd = 46200;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1055 } };

  // [23] = {
  lBuilding.Lvls[23] = {};
  lBuildingLvl = lBuilding.Lvls[23];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 23;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 23} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 3000000},
    { EResource::Iron, 375000 },
    { EResource::Mithril, 53600 }
  };
  lBuildingLvl.CostTime = 200880;
  lBuildingLvl.Reword.Exp = 5744;
  lBuildingLvl.kingdomPoint = 74400;
  lBuildingLvl.Reword.Power = 8178;
  lBuildingLvl.atkAdd = 49400;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1165 } };

  // [24] = {
  lBuilding.Lvls[24] = {};
  lBuildingLvl = lBuilding.Lvls[24];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 24;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 24} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 4000000},
    { EResource::Iron, 500000 },
    { EResource::Mithril, 71500 }
  };
  lBuildingLvl.CostTime = 231120;
  lBuildingLvl.Reword.Exp = 6608;
  lBuildingLvl.kingdomPoint = 85600;
  lBuildingLvl.Reword.Power = 9651;
  lBuildingLvl.atkAdd = 52800;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1280 } };

  // [25] = {
  lBuilding.Lvls[25] = {};
  lBuildingLvl = lBuilding.Lvls[25];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 25;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 25} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 5500000},
    { EResource::Iron, 687500 },
    { EResource::Mithril, 98300 }
  };
  lBuildingLvl.CostTime = 265680;
  lBuildingLvl.Reword.Exp = 7595;
  lBuildingLvl.kingdomPoint = 98400;
  lBuildingLvl.Reword.Power = 11321;
  lBuildingLvl.atkAdd = 56200;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1400 } };

  // [26] = {
  lBuilding.Lvls[26] = {};
  lBuildingLvl = lBuilding.Lvls[26];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 26;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 26} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 7500000},
    { EResource::Iron, 937500 },
    { EResource::Mithril, 134000 }
  };
  lBuildingLvl.CostTime = 304560;
  lBuildingLvl.Reword.Exp = 8706;
  lBuildingLvl.kingdomPoint = 112800;
  lBuildingLvl.Reword.Power = 13214;
  lBuildingLvl.atkAdd = 59800;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1525 } };

  // [27] = {
  lBuilding.Lvls[27] = {};
  lBuildingLvl = lBuilding.Lvls[27];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 27;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 27} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 10000000},
    { EResource::Iron, 1250000 },
    { EResource::Mithril, 178700 }
  };
  lBuildingLvl.CostTime = 347760;
  lBuildingLvl.Reword.Exp = 9941;
  lBuildingLvl.kingdomPoint = 128800;
  lBuildingLvl.Reword.Power = 15362;
  lBuildingLvl.atkAdd = 63400;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1655 } };

  // [28] = {
  lBuilding.Lvls[28] = {};
  lBuildingLvl = lBuilding.Lvls[28];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 28;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 28} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 13000000},
    { EResource::Iron, 1625000 },
    { EResource::Mithril, 232300 }
  };
  lBuildingLvl.CostTime = 395280;
  lBuildingLvl.Reword.Exp = 11298;
  lBuildingLvl.kingdomPoint = 146400;
  lBuildingLvl.Reword.Power = 17797;
  lBuildingLvl.atkAdd = 67200;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1790 } };

  // [29] = {
  lBuilding.Lvls[29] = {};
  lBuildingLvl = lBuilding.Lvls[29];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 29;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 29} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 17000000},
    { EResource::Iron, 2125000 },
    { EResource::Mithril, 303800 }
  };
  lBuildingLvl.CostTime = 447120;
  lBuildingLvl.Reword.Exp = 12779;
  lBuildingLvl.kingdomPoint = 165600;
  lBuildingLvl.Reword.Power = 20559;
  lBuildingLvl.atkAdd = 71000;
  lBuildingLvl.atkSpeedAdd = 670;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 1930 } };

  // [30] = {
  lBuilding.Lvls[30] = {};
  lBuildingLvl = lBuilding.Lvls[30];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 30;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 30} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 22000000},
    { EResource::Iron, 2750000 },
    { EResource::Mithril, 393200 }
  };
  lBuildingLvl.CostTime = 511920;
  lBuildingLvl.Reword.Exp = 14631;
  lBuildingLvl.kingdomPoint = 189600;
  lBuildingLvl.Reword.Power = 23690;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 2075 } };

  // [31] = {
  lBuilding.Lvls[31] = {};
  lBuildingLvl = lBuilding.Lvls[31];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 31;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1500000 },
    { EResource::Wood, 1500000},
    { EResource::Iron, 150000 },
    { EResource::Mithril, 75000 }
  };
  lBuildingLvl.CostTime = 36000;
  lBuildingLvl.Reword.Exp = 1205;
  lBuildingLvl.kingdomPoint = 13333;
  lBuildingLvl.Reword.Power = 24021;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 220 } };
  lBuildingLvl.CostWEs = { { 301101, 5} };
  
  // [32] = {
  lBuilding.Lvls[32] = {};
  lBuildingLvl = lBuilding.Lvls[32];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 32;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1550000 },
    { EResource::Wood, 1550000},
    { EResource::Iron, 155000 },
    { EResource::Mithril, 77500 }
  };
  lBuildingLvl.CostTime = 43200;
  lBuildingLvl.Reword.Exp = 1445;
  lBuildingLvl.kingdomPoint = 16000;
  lBuildingLvl.Reword.Power = 24352;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 222 } };
  lBuildingLvl.CostWEs = { { 301101, 10} };
  
  // [33] = {
  lBuilding.Lvls[33] = {};
  lBuildingLvl = lBuilding.Lvls[33];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 33;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1600000 },
    { EResource::Wood, 1600000},
    { EResource::Iron, 160000 },
    { EResource::Mithril, 80000 }
  };
  lBuildingLvl.CostTime = 50400;
  lBuildingLvl.Reword.Exp = 1685;
  lBuildingLvl.kingdomPoint = 18666;
  lBuildingLvl.Reword.Power = 24683;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 224 } };
  lBuildingLvl.CostWEs = { { 301101, 15} };
  
  // [34] = {
  lBuilding.Lvls[34] = {};
  lBuildingLvl = lBuilding.Lvls[34];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 34;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1650000 },
    { EResource::Wood, 1650000},
    { EResource::Iron, 165000 },
    { EResource::Mithril, 82500 }
  };
  lBuildingLvl.CostTime = 57600;
  lBuildingLvl.Reword.Exp = 1925;
  lBuildingLvl.kingdomPoint = 21333;
  lBuildingLvl.Reword.Power = 25014;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 226 } };
  lBuildingLvl.CostWEs = { { 301101, 20} };
  
  // [35] = {
  lBuilding.Lvls[35] = {};
  lBuildingLvl = lBuilding.Lvls[35];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 35;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1700000 },
    { EResource::Wood, 1700000},
    { EResource::Iron, 170000 },
    { EResource::Mithril, 85000 }
  };
  lBuildingLvl.CostTime = 64800;
  lBuildingLvl.Reword.Exp = 2165;
  lBuildingLvl.kingdomPoint = 24000;
  lBuildingLvl.Reword.Power = 25345;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 228 } };
  lBuildingLvl.CostWEs = { { 301101, 25} };
  
  // [36] = {
  lBuilding.Lvls[36] = {};
  lBuildingLvl = lBuilding.Lvls[36];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 36;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1750000 },
    { EResource::Wood, 1750000},
    { EResource::Iron, 175000 },
    { EResource::Mithril, 87500 }
  };
  lBuildingLvl.CostTime = 72000;
  lBuildingLvl.Reword.Exp = 2405;
  lBuildingLvl.kingdomPoint = 26666;
  lBuildingLvl.Reword.Power = 25676;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 230 } };
  lBuildingLvl.CostWEs = { { 301101, 30} };
  
  // [37] = {
  lBuilding.Lvls[37] = {};
  lBuildingLvl = lBuilding.Lvls[37];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 37;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1800000 },
    { EResource::Wood, 1800000},
    { EResource::Iron, 180000 },
    { EResource::Mithril, 90000 }
  };
  lBuildingLvl.CostTime = 79200;
  lBuildingLvl.Reword.Exp = 2645;
  lBuildingLvl.kingdomPoint = 29333;
  lBuildingLvl.Reword.Power = 26007;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 232 } };
  lBuildingLvl.CostWEs = { { 301101, 35} };
  
  // [38] = {
  lBuilding.Lvls[38] = {};
  lBuildingLvl = lBuilding.Lvls[38];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 38;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1850000 },
    { EResource::Wood, 1850000},
    { EResource::Iron, 185000 },
    { EResource::Mithril, 92500 }
  };
  lBuildingLvl.CostTime = 86400;
  lBuildingLvl.Reword.Exp = 2885;
  lBuildingLvl.kingdomPoint = 32000;
  lBuildingLvl.Reword.Power = 26338;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 234 } };
  lBuildingLvl.CostWEs = { { 301101, 40} };
  
  // [39] = {
  lBuilding.Lvls[39] = {};
  lBuildingLvl = lBuilding.Lvls[39];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 39;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1900000 },
    { EResource::Wood, 1900000},
    { EResource::Iron, 190000 },
    { EResource::Mithril, 95000 }
  };
  lBuildingLvl.CostTime = 93600;
  lBuildingLvl.Reword.Exp = 3125;
  lBuildingLvl.kingdomPoint = 34666;
  lBuildingLvl.Reword.Power = 26669;
  lBuildingLvl.atkAdd = 75000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 236 } };
  lBuildingLvl.CostWEs = { { 301101, 45} };
  
  // [40] = {
  lBuilding.Lvls[40] = {};
  lBuildingLvl = lBuilding.Lvls[40];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 40;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 40} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 1950000 },
    { EResource::Wood, 1950000},
    { EResource::Iron, 195000 },
    { EResource::Mithril, 97500 }
  };
  lBuildingLvl.CostTime = 100800;
  lBuildingLvl.Reword.Exp = 3365;
  lBuildingLvl.kingdomPoint = 37333;
  lBuildingLvl.Reword.Power = 27000;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 238 } };
  lBuildingLvl.CostWEs = { { 301101, 50} };
  
  // [41] = {
  lBuilding.Lvls[41] = {};
  lBuildingLvl = lBuilding.Lvls[41];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 41;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2000000 },
    { EResource::Wood, 2000000},
    { EResource::Iron, 200000 },
    { EResource::Mithril, 100000 }
  };
  lBuildingLvl.CostTime = 108000;
  lBuildingLvl.Reword.Exp = 3605;
  lBuildingLvl.kingdomPoint = 40000;
  lBuildingLvl.Reword.Power = 27800;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 240 } };
  lBuildingLvl.CostWEs = { { 301101, 50} };
  
  // [42] = {
  lBuilding.Lvls[42] = {};
  lBuildingLvl = lBuilding.Lvls[42];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 42;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2050000 },
    { EResource::Wood, 2050000},
    { EResource::Iron, 205000 },
    { EResource::Mithril, 102500 }
  };
  lBuildingLvl.CostTime = 115200;
  lBuildingLvl.Reword.Exp = 3845;
  lBuildingLvl.kingdomPoint = 42666;
  lBuildingLvl.Reword.Power = 28600;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 242 } };
  lBuildingLvl.CostWEs = { { 301101, 60} };
  
  // [43] = {
  lBuilding.Lvls[43] = {};
  lBuildingLvl = lBuilding.Lvls[43];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 43;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2100000 },
    { EResource::Wood, 2100000},
    { EResource::Iron, 210000 },
    { EResource::Mithril, 105000 }
  };
  lBuildingLvl.CostTime = 122400;
  lBuildingLvl.Reword.Exp = 4085;
  lBuildingLvl.kingdomPoint = 45333;
  lBuildingLvl.Reword.Power = 29400;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 244 } };
  lBuildingLvl.CostWEs = { { 301101, 70} };
  
  // [44] = {
  lBuilding.Lvls[44] = {};
  lBuildingLvl = lBuilding.Lvls[44];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 44;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2150000 },
    { EResource::Wood, 2150000},
    { EResource::Iron, 215000 },
    { EResource::Mithril, 107500 }
  };
  lBuildingLvl.CostTime = 129600;
  lBuildingLvl.Reword.Exp = 4325;
  lBuildingLvl.kingdomPoint = 48000;
  lBuildingLvl.Reword.Power = 30200;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 246 } };
  lBuildingLvl.CostWEs = { { 301101, 80} };
  
  // [45] = {
  lBuilding.Lvls[45] = {};
  lBuildingLvl = lBuilding.Lvls[45];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 45;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2200000 },
    { EResource::Wood, 2200000},
    { EResource::Iron, 220000 },
    { EResource::Mithril, 110000 }
  };
  lBuildingLvl.CostTime = 136800;
  lBuildingLvl.Reword.Exp = 4565;
  lBuildingLvl.kingdomPoint = 50666;
  lBuildingLvl.Reword.Power = 31000;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 248 } };
  lBuildingLvl.CostWEs = { { 301101, 90} };
  
  // [46] = {
  lBuilding.Lvls[46] = {};
  lBuildingLvl = lBuilding.Lvls[46];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 46;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2250000 },
    { EResource::Wood, 2250000},
    { EResource::Iron, 225000 },
    { EResource::Mithril, 112500 }
  };
  lBuildingLvl.CostTime = 144000;
  lBuildingLvl.Reword.Exp = 4805;
  lBuildingLvl.kingdomPoint = 53333;
  lBuildingLvl.Reword.Power = 31800;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 250 } };
  lBuildingLvl.CostWEs = { { 301101, 100} };
  
  // [47] = {
  lBuilding.Lvls[47] = {};
  lBuildingLvl = lBuilding.Lvls[47];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 47;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2300000 },
    { EResource::Wood, 2300000},
    { EResource::Iron, 230000 },
    { EResource::Mithril, 115000 }
  };
  lBuildingLvl.CostTime = 151200;
  lBuildingLvl.Reword.Exp = 5045;
  lBuildingLvl.kingdomPoint = 56000;
  lBuildingLvl.Reword.Power = 32600;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 252 } };
  lBuildingLvl.CostWEs = { { 301101, 110} };
  
  // [48] = {
  lBuilding.Lvls[48] = {};
  lBuildingLvl = lBuilding.Lvls[48];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 48;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2350000 },
    { EResource::Wood, 2350000},
    { EResource::Iron, 235000 },
    { EResource::Mithril, 117500 }
  };
  lBuildingLvl.CostTime = 158400;
  lBuildingLvl.Reword.Exp = 5285;
  lBuildingLvl.kingdomPoint = 58666;
  lBuildingLvl.Reword.Power = 33400;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 254 } };
  lBuildingLvl.CostWEs = { { 301101, 120} };
  
  // [49] = {
  lBuilding.Lvls[49] = {};
  lBuildingLvl = lBuilding.Lvls[49];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 49;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2400000 },
    { EResource::Wood, 2400000},
    { EResource::Iron, 240000 },
    { EResource::Mithril, 120000 }
  };
  lBuildingLvl.CostTime = 165600;
  lBuildingLvl.Reword.Exp = 5525;
  lBuildingLvl.kingdomPoint = 61333;
  lBuildingLvl.Reword.Power = 34200;
  lBuildingLvl.atkAdd = 80000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 256 } };
  lBuildingLvl.CostWEs = { { 301101, 130} };
  
  // [50] = {
  lBuilding.Lvls[50] = {};
  lBuildingLvl = lBuilding.Lvls[50];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 50;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 50} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2450000 },
    { EResource::Wood, 2450000},
    { EResource::Iron, 245000 },
    { EResource::Mithril, 122500 }
  };
  lBuildingLvl.CostTime = 172800;
  lBuildingLvl.Reword.Exp = 5765;
  lBuildingLvl.kingdomPoint = 64000;
  lBuildingLvl.Reword.Power = 35000;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 258 } };
  lBuildingLvl.CostWEs = { { 301101, 140} };
  
  // [51] = {
  lBuilding.Lvls[51] = {};
  lBuildingLvl = lBuilding.Lvls[51];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 51;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2500000 },
    { EResource::Wood, 2500000},
    { EResource::Iron, 250000 },
    { EResource::Mithril, 125000 }
  };
  lBuildingLvl.CostTime = 180000;
  lBuildingLvl.Reword.Exp = 6005;
  lBuildingLvl.kingdomPoint = 66666;
  lBuildingLvl.Reword.Power = 35800;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 260 } };
  lBuildingLvl.CostWEs = { { 301101, 155} };
  
  // [52] = {
  lBuilding.Lvls[52] = {};
  lBuildingLvl = lBuilding.Lvls[52];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 52;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2550000 },
    { EResource::Wood, 2550000},
    { EResource::Iron, 255000 },
    { EResource::Mithril, 127500 }
  };
  lBuildingLvl.CostTime = 187200;
  lBuildingLvl.Reword.Exp = 6245;
  lBuildingLvl.kingdomPoint = 69333;
  lBuildingLvl.Reword.Power = 36600;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 262 } };
  lBuildingLvl.CostWEs = { { 301101, 170} };
  
  // [53] = {
  lBuilding.Lvls[53] = {};
  lBuildingLvl = lBuilding.Lvls[53];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 53;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2600000 },
    { EResource::Wood, 2600000},
    { EResource::Iron, 260000 },
    { EResource::Mithril, 130000 }
  };
  lBuildingLvl.CostTime = 194400;
  lBuildingLvl.Reword.Exp = 6485;
  lBuildingLvl.kingdomPoint = 72000;
  lBuildingLvl.Reword.Power = 37400;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 264 } };
  lBuildingLvl.CostWEs = { { 301101, 185} };
  
  // [54] = {
  lBuilding.Lvls[54] = {};
  lBuildingLvl = lBuilding.Lvls[54];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 54;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2650000 },
    { EResource::Wood, 2650000},
    { EResource::Iron, 265000 },
    { EResource::Mithril, 132500 }
  };
  lBuildingLvl.CostTime = 201600;
  lBuildingLvl.Reword.Exp = 6725;
  lBuildingLvl.kingdomPoint = 74666;
  lBuildingLvl.Reword.Power = 38200;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 266 } };
  lBuildingLvl.CostWEs = { { 301101, 200} };
  
  // [55] = {
  lBuilding.Lvls[55] = {};
  lBuildingLvl = lBuilding.Lvls[55];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 55;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2700000 },
    { EResource::Wood, 2700000},
    { EResource::Iron, 270000 },
    { EResource::Mithril, 135000 }
  };
  lBuildingLvl.CostTime = 208800;
  lBuildingLvl.Reword.Exp = 6965;
  lBuildingLvl.kingdomPoint = 77333;
  lBuildingLvl.Reword.Power = 39000;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 268 } };
  lBuildingLvl.CostWEs = { { 301101, 215} };
  
  // [56] = {
  lBuilding.Lvls[56] = {};
  lBuildingLvl = lBuilding.Lvls[56];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 56;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2750000 },
    { EResource::Wood, 2750000},
    { EResource::Iron, 275000 },
    { EResource::Mithril, 137500 }
  };
  lBuildingLvl.CostTime = 216000;
  lBuildingLvl.Reword.Exp = 7205;
  lBuildingLvl.kingdomPoint = 80000;
  lBuildingLvl.Reword.Power = 39800;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 270 } };
  lBuildingLvl.CostWEs = { { 301101, 230} };
  
  // [57] = {
  lBuilding.Lvls[57] = {};
  lBuildingLvl = lBuilding.Lvls[57];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 57;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2800000 },
    { EResource::Wood, 2800000},
    { EResource::Iron, 280000 },
    { EResource::Mithril, 140000 }
  };
  lBuildingLvl.CostTime = 223200;
  lBuildingLvl.Reword.Exp = 7445;
  lBuildingLvl.kingdomPoint = 82666;
  lBuildingLvl.Reword.Power = 40600;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 272 } };
  lBuildingLvl.CostWEs = { { 301101, 245} };
  
  // [58] = {
  lBuilding.Lvls[58] = {};
  lBuildingLvl = lBuilding.Lvls[58];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 58;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2850000 },
    { EResource::Wood, 2850000},
    { EResource::Iron, 285000 },
    { EResource::Mithril, 142500 }
  };
  lBuildingLvl.CostTime = 230400;
  lBuildingLvl.Reword.Exp = 7685;
  lBuildingLvl.kingdomPoint = 85333;
  lBuildingLvl.Reword.Power = 41400;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 274 } };
  lBuildingLvl.CostWEs = { { 301101, 260} };
  
  // [59] = {
  lBuilding.Lvls[59] = {};
  lBuildingLvl = lBuilding.Lvls[59];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 59;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2900000 },
    { EResource::Wood, 2900000},
    { EResource::Iron, 290000 },
    { EResource::Mithril, 145000 }
  };
  lBuildingLvl.CostTime = 237600;
  lBuildingLvl.Reword.Exp = 7925;
  lBuildingLvl.kingdomPoint = 88000;
  lBuildingLvl.Reword.Power = 42200;
  lBuildingLvl.atkAdd = 85000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 276 } };
  lBuildingLvl.CostWEs = { { 301101, 275} };
  
  // [60] = {
  lBuilding.Lvls[60] = {};
  lBuildingLvl = lBuilding.Lvls[60];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 60;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 60} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 2950000 },
    { EResource::Wood, 2950000},
    { EResource::Iron, 295000 },
    { EResource::Mithril, 147500 }
  };
  lBuildingLvl.CostTime = 244800;
  lBuildingLvl.Reword.Exp = 8165;
  lBuildingLvl.kingdomPoint = 90666;
  lBuildingLvl.Reword.Power = 43000;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 278 } };
  lBuildingLvl.CostWEs = { { 301101, 290} };
  
  // [61] = {
  lBuilding.Lvls[61] = {};
  lBuildingLvl = lBuilding.Lvls[61];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 61;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3000000 },
    { EResource::Wood, 3000000},
    { EResource::Iron, 300000 },
    { EResource::Mithril, 150000 }
  };
  lBuildingLvl.CostTime = 252000;
  lBuildingLvl.Reword.Exp = 8405;
  lBuildingLvl.kingdomPoint = 93333;
  lBuildingLvl.Reword.Power = 43800;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 280 } };
  lBuildingLvl.CostWEs = { { 301101, 300} };
  
  // [62] = {
  lBuilding.Lvls[62] = {};
  lBuildingLvl = lBuilding.Lvls[62];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 62;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3050000 },
    { EResource::Wood, 3050000},
    { EResource::Iron, 305000 },
    { EResource::Mithril, 152500 }
  };
  lBuildingLvl.CostTime = 259200;
  lBuildingLvl.Reword.Exp = 8645;
  lBuildingLvl.kingdomPoint = 96000;
  lBuildingLvl.Reword.Power = 44600;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 282 } };
  lBuildingLvl.CostWEs = { { 301101, 325} };
  
  // [63] = {
  lBuilding.Lvls[63] = {};
  lBuildingLvl = lBuilding.Lvls[63];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 63;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3100000 },
    { EResource::Wood, 3100000},
    { EResource::Iron, 310000 },
    { EResource::Mithril, 155000 }
  };
  lBuildingLvl.CostTime = 266400;
  lBuildingLvl.Reword.Exp = 8885;
  lBuildingLvl.kingdomPoint = 98666;
  lBuildingLvl.Reword.Power = 45400;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 284 } };
  lBuildingLvl.CostWEs = { { 301101, 350} };
  
  // [64] = {
  lBuilding.Lvls[64] = {};
  lBuildingLvl = lBuilding.Lvls[64];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 64;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3150000 },
    { EResource::Wood, 3150000},
    { EResource::Iron, 315000 },
    { EResource::Mithril, 157500 }
  };
  lBuildingLvl.CostTime = 273600;
  lBuildingLvl.Reword.Exp = 9125;
  lBuildingLvl.kingdomPoint = 101333;
  lBuildingLvl.Reword.Power = 46200;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 286 } };
  lBuildingLvl.CostWEs = { { 301101, 375} };
  
  // [65] = {
  lBuilding.Lvls[65] = {};
  lBuildingLvl = lBuilding.Lvls[65];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 65;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3200000 },
    { EResource::Wood, 3200000},
    { EResource::Iron, 320000 },
    { EResource::Mithril, 160000 }
  };
  lBuildingLvl.CostTime = 280800;
  lBuildingLvl.Reword.Exp = 9365;
  lBuildingLvl.kingdomPoint = 104000;
  lBuildingLvl.Reword.Power = 47000;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 288 } };
  lBuildingLvl.CostWEs = { { 301101, 400} };
  
  // [66] = {
  lBuilding.Lvls[66] = {};
  lBuildingLvl = lBuilding.Lvls[66];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 66;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3250000 },
    { EResource::Wood, 3250000},
    { EResource::Iron, 325000 },
    { EResource::Mithril, 162500 }
  };
  lBuildingLvl.CostTime = 288000;
  lBuildingLvl.Reword.Exp = 9605;
  lBuildingLvl.kingdomPoint = 106666;
  lBuildingLvl.Reword.Power = 47800;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 290 } };
  lBuildingLvl.CostWEs = { { 301101, 425} };
  
  // [67] = {
  lBuilding.Lvls[67] = {};
  lBuildingLvl = lBuilding.Lvls[67];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 67;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3300000 },
    { EResource::Wood, 3300000},
    { EResource::Iron, 330000 },
    { EResource::Mithril, 165000 }
  };
  lBuildingLvl.CostTime = 295200;
  lBuildingLvl.Reword.Exp = 9845;
  lBuildingLvl.kingdomPoint = 109333;
  lBuildingLvl.Reword.Power = 48600;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 292 } };
  lBuildingLvl.CostWEs = { { 301101, 450} };
  
  // [68] = {
  lBuilding.Lvls[68] = {};
  lBuildingLvl = lBuilding.Lvls[68];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 68;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3350000 },
    { EResource::Wood, 3350000},
    { EResource::Iron, 335000 },
    { EResource::Mithril, 167500 }
  };
  lBuildingLvl.CostTime = 302400;
  lBuildingLvl.Reword.Exp = 10085;
  lBuildingLvl.kingdomPoint = 112000;
  lBuildingLvl.Reword.Power = 49400;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 294 } };
  lBuildingLvl.CostWEs = { { 301101, 475} };
  
  // [69] = {
  lBuilding.Lvls[69] = {};
  lBuildingLvl = lBuilding.Lvls[69];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 69;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3400000 },
    { EResource::Wood, 3400000},
    { EResource::Iron, 340000 },
    { EResource::Mithril, 170000 }
  };
  lBuildingLvl.CostTime = 309600;
  lBuildingLvl.Reword.Exp = 10325;
  lBuildingLvl.kingdomPoint = 114666;
  lBuildingLvl.Reword.Power = 50200;
  lBuildingLvl.atkAdd = 91000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 296 } };
  lBuildingLvl.CostWEs = { { 301101, 500} };
  
  // [70] = {
  lBuilding.Lvls[70] = {};
  lBuildingLvl = lBuilding.Lvls[70];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 70;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 70} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3450000 },
    { EResource::Wood, 3450000},
    { EResource::Iron, 345000 },
    { EResource::Mithril, 172500 }
  };
  lBuildingLvl.CostTime = 316800;
  lBuildingLvl.Reword.Exp = 10565;
  lBuildingLvl.kingdomPoint = 117333;
  lBuildingLvl.Reword.Power = 51000;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 298 } };
  lBuildingLvl.CostWEs = { { 301101, 525} };
  
  // [71] = {
  lBuilding.Lvls[71] = {};
  lBuildingLvl = lBuilding.Lvls[71];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 71;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3500000 },
    { EResource::Wood, 3500000},
    { EResource::Iron, 350000 },
    { EResource::Mithril, 175000 }
  };
  lBuildingLvl.CostTime = 324000;
  lBuildingLvl.Reword.Exp = 10805;
  lBuildingLvl.kingdomPoint = 120000;
  lBuildingLvl.Reword.Power = 51800;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 300 } };
  lBuildingLvl.CostWEs = { { 301101, 600} };
  
  // [72] = {
  lBuilding.Lvls[72] = {};
  lBuildingLvl = lBuilding.Lvls[72];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 72;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3550000 },
    { EResource::Wood, 3550000},
    { EResource::Iron, 355000 },
    { EResource::Mithril, 177500 }
  };
  lBuildingLvl.CostTime = 331200;
  lBuildingLvl.Reword.Exp = 11045;
  lBuildingLvl.kingdomPoint = 122666;
  lBuildingLvl.Reword.Power = 52600;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 302 } };
  lBuildingLvl.CostWEs = { { 301101, 650} };
  
  // [73] = {
  lBuilding.Lvls[73] = {};
  lBuildingLvl = lBuilding.Lvls[73];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 73;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3600000 },
    { EResource::Wood, 3600000},
    { EResource::Iron, 360000 },
    { EResource::Mithril, 180000 }
  };
  lBuildingLvl.CostTime = 338400;
  lBuildingLvl.Reword.Exp = 11285;
  lBuildingLvl.kingdomPoint = 125333;
  lBuildingLvl.Reword.Power = 53400;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 304 } };
  lBuildingLvl.CostWEs = { { 301101, 700} };
  
  // [74] = {
  lBuilding.Lvls[74] = {};
  lBuildingLvl = lBuilding.Lvls[74];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 74;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3650000 },
    { EResource::Wood, 3650000},
    { EResource::Iron, 365000 },
    { EResource::Mithril, 182500 }
  };
  lBuildingLvl.CostTime = 345600;
  lBuildingLvl.Reword.Exp = 11525;
  lBuildingLvl.kingdomPoint = 128000;
  lBuildingLvl.Reword.Power = 54200;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 306 } };
  lBuildingLvl.CostWEs = { { 301101, 750} };
  
  // [75] = {
  lBuilding.Lvls[75] = {};
  lBuildingLvl = lBuilding.Lvls[75];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 75;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3700000 },
    { EResource::Wood, 3700000},
    { EResource::Iron, 370000 },
    { EResource::Mithril, 185000 }
  };
  lBuildingLvl.CostTime = 352800;
  lBuildingLvl.Reword.Exp = 11765;
  lBuildingLvl.kingdomPoint = 130666;
  lBuildingLvl.Reword.Power = 55000;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 308 } };
  lBuildingLvl.CostWEs = { { 301101, 800} };
  
  // [76] = {
  lBuilding.Lvls[76] = {};
  lBuildingLvl = lBuilding.Lvls[76];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 76;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3750000 },
    { EResource::Wood, 3750000},
    { EResource::Iron, 375000 },
    { EResource::Mithril, 187500 }
  };
  lBuildingLvl.CostTime = 360000;
  lBuildingLvl.Reword.Exp = 12005;
  lBuildingLvl.kingdomPoint = 133333;
  lBuildingLvl.Reword.Power = 55800;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 310 } };
  lBuildingLvl.CostWEs = { { 301101, 850} };
  
  // [77] = {
  lBuilding.Lvls[77] = {};
  lBuildingLvl = lBuilding.Lvls[77];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 77;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3800000 },
    { EResource::Wood, 3800000},
    { EResource::Iron, 380000 },
    { EResource::Mithril, 190000 }
  };
  lBuildingLvl.CostTime = 367200;
  lBuildingLvl.Reword.Exp = 12245;
  lBuildingLvl.kingdomPoint = 136000;
  lBuildingLvl.Reword.Power = 56600;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 312 } };
  lBuildingLvl.CostWEs = { { 301101, 900} };
  
  // [78] = {
  lBuilding.Lvls[78] = {};
  lBuildingLvl = lBuilding.Lvls[78];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 78;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3850000 },
    { EResource::Wood, 3850000},
    { EResource::Iron, 385000 },
    { EResource::Mithril, 192500 }
  };
  lBuildingLvl.CostTime = 374400;
  lBuildingLvl.Reword.Exp = 12485;
  lBuildingLvl.kingdomPoint = 138666;
  lBuildingLvl.Reword.Power = 57400;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 314 } };
  lBuildingLvl.CostWEs = { { 301101, 950} };
  
  // [79] = {
  lBuilding.Lvls[79] = {};
  lBuildingLvl = lBuilding.Lvls[79];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 79;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3900000 },
    { EResource::Wood, 3900000},
    { EResource::Iron, 390000 },
    { EResource::Mithril, 195000 }
  };
  lBuildingLvl.CostTime = 381600;
  lBuildingLvl.Reword.Exp = 12725;
  lBuildingLvl.kingdomPoint = 141333;
  lBuildingLvl.Reword.Power = 58200;
  lBuildingLvl.atkAdd = 97000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 316 } };
  lBuildingLvl.CostWEs = { { 301101, 1000} };
  
  // [80] = {
  lBuilding.Lvls[80] = {};
  lBuildingLvl = lBuilding.Lvls[80];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 80;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 80} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 3900000 },
    { EResource::Wood, 3900000},
    { EResource::Iron, 390000 },
    { EResource::Mithril, 195000 }
  };
  lBuildingLvl.CostTime = 388800;
  lBuildingLvl.Reword.Exp = 12965;
  lBuildingLvl.kingdomPoint = 144000;
  lBuildingLvl.Reword.Power = 59000;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 318 } };
  lBuildingLvl.CostWEs = { { 301101, 1050} };
  
  // [81] = {
  lBuilding.Lvls[81] = {};
  lBuildingLvl = lBuilding.Lvls[81];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 81;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4000000},
    { EResource::Wood, 4000000},
    { EResource::Iron, 400000},
    { EResource::Mithril, 200000},
    { EResource::Crystal, 1000}
  };
  lBuildingLvl.CostTime = 396000;
  lBuildingLvl.Reword.Exp = 13205;
  lBuildingLvl.kingdomPoint = 146666;
  lBuildingLvl.Reword.Power = 60100;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 320 } };
  lBuildingLvl.CostWEs = { { 301901, 75} };
  
  // [82] = {
  lBuilding.Lvls[82] = {};
  lBuildingLvl = lBuilding.Lvls[82];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 82;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4100000},
    { EResource::Wood, 4100000},
    { EResource::Iron, 405000},
    { EResource::Mithril, 202500},
    { EResource::Crystal, 3000}
  };
  lBuildingLvl.CostTime = 403200;
  lBuildingLvl.Reword.Exp = 13445;
  lBuildingLvl.kingdomPoint = 149333;
  lBuildingLvl.Reword.Power = 61200;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 322 } };
  lBuildingLvl.CostWEs = { { 301901, 90} };
  
  // [83] = {
  lBuilding.Lvls[83] = {};
  lBuildingLvl = lBuilding.Lvls[83];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 83;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4200000},
    { EResource::Wood, 4200000},
    { EResource::Iron, 410000},
    { EResource::Mithril, 205000},
    { EResource::Crystal, 5000}
  };
  lBuildingLvl.CostTime = 410400;
  lBuildingLvl.Reword.Exp = 13685;
  lBuildingLvl.kingdomPoint = 152000;
  lBuildingLvl.Reword.Power = 62300;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 324 } };
  lBuildingLvl.CostWEs = { { 301901, 105} };
  
  // [84] = {
  lBuilding.Lvls[84] = {};
  lBuildingLvl = lBuilding.Lvls[84];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 84;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4300000},
    { EResource::Wood, 4300000},
    { EResource::Iron, 415000},
    { EResource::Mithril, 207500},
    { EResource::Crystal, 7000}
  };
  lBuildingLvl.CostTime = 417600;
  lBuildingLvl.Reword.Exp = 13925;
  lBuildingLvl.kingdomPoint = 154666;
  lBuildingLvl.Reword.Power = 63400;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 326 } };
  lBuildingLvl.CostWEs = { { 301901, 120} };
  
  // [85] = {
  lBuilding.Lvls[85] = {};
  lBuildingLvl = lBuilding.Lvls[85];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 85;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4400000},
    { EResource::Wood, 4400000},
    { EResource::Iron, 420000},
    { EResource::Mithril, 210000},
    { EResource::Crystal, 9000}
  };
  lBuildingLvl.CostTime = 424800;
  lBuildingLvl.Reword.Exp = 14165;
  lBuildingLvl.kingdomPoint = 157333;
  lBuildingLvl.Reword.Power = 64500;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 328 } };
  lBuildingLvl.CostWEs = { { 301901, 135} };
  
  // [86] = {
  lBuilding.Lvls[86] = {};
  lBuildingLvl = lBuilding.Lvls[86];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 86;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4500000},
    { EResource::Wood, 4500000},
    { EResource::Iron, 425000},
    { EResource::Mithril, 212500},
    { EResource::Crystal, 11500}
  };
  lBuildingLvl.CostTime = 432000;
  lBuildingLvl.Reword.Exp = 14405;
  lBuildingLvl.kingdomPoint = 160000;
  lBuildingLvl.Reword.Power = 65600;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 330 } };
  lBuildingLvl.CostWEs = { { 301901, 150} };
  
  // [87] = {
  lBuilding.Lvls[87] = {};
  lBuildingLvl = lBuilding.Lvls[87];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 87;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4600000},
    { EResource::Wood, 4600000},
    { EResource::Iron, 430000},
    { EResource::Mithril, 215000},
    { EResource::Crystal, 13500}
  };
  lBuildingLvl.CostTime = 439200;
  lBuildingLvl.Reword.Exp = 14645;
  lBuildingLvl.kingdomPoint = 162666;
  lBuildingLvl.Reword.Power = 66700;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 332 } };
  lBuildingLvl.CostWEs = { { 301901, 165} };
  
  // [88] = {
  lBuilding.Lvls[88] = {};
  lBuildingLvl = lBuilding.Lvls[88];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 88;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4700000},
    { EResource::Wood, 4700000},
    { EResource::Iron, 435000},
    { EResource::Mithril, 217500},
    { EResource::Crystal, 15500}
  };
  lBuildingLvl.CostTime = 446400;
  lBuildingLvl.Reword.Exp = 14885;
  lBuildingLvl.kingdomPoint = 165333;
  lBuildingLvl.Reword.Power = 67800;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 334 } };
  lBuildingLvl.CostWEs = { { 301901, 180} };
  
  // [89] = {
  lBuilding.Lvls[89] = {};
  lBuildingLvl = lBuilding.Lvls[89];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 89;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4800000},
    { EResource::Wood, 4800000},
    { EResource::Iron, 440000},
    { EResource::Mithril, 220000},
    { EResource::Crystal, 18000}
  };
  lBuildingLvl.CostTime = 453600;
  lBuildingLvl.Reword.Exp = 15125;
  lBuildingLvl.kingdomPoint = 168000;
  lBuildingLvl.Reword.Power = 68900;
  lBuildingLvl.atkAdd = 103000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 336 } };
  lBuildingLvl.CostWEs = { { 301901, 195} };
  
  // [90] = {
  lBuilding.Lvls[90] = {};
  lBuildingLvl = lBuilding.Lvls[90];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 90;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 90} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 4900000},
    { EResource::Wood, 4900000},
    { EResource::Iron, 445000},
    { EResource::Mithril, 222500},
    { EResource::Crystal, 20000}
  };
  lBuildingLvl.CostTime = 460800;
  lBuildingLvl.Reword.Exp = 15365;
  lBuildingLvl.kingdomPoint = 170666;
  lBuildingLvl.Reword.Power = 70000;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 338 } };
  lBuildingLvl.CostWEs = { { 301901, 210} };
  
  // [91] = {
  lBuilding.Lvls[91] = {};
  lBuildingLvl = lBuilding.Lvls[91];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 91;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5000000},
    { EResource::Wood, 5000000},
    { EResource::Iron, 450000},
    { EResource::Mithril, 225000},
    { EResource::Crystal, 22500}
  };
  lBuildingLvl.CostTime = 468000;
  lBuildingLvl.Reword.Exp = 15605;
  lBuildingLvl.kingdomPoint = 173333;
  lBuildingLvl.Reword.Power = 71100;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 340 } };
  lBuildingLvl.CostWEs = { { 301901, 234} };
  
  // [92] = {
  lBuilding.Lvls[92] = {};
  lBuildingLvl = lBuilding.Lvls[92];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 92;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5100000},
    { EResource::Wood, 5100000},
    { EResource::Iron, 455000},
    { EResource::Mithril, 227500},
    { EResource::Crystal, 25000}
  };
  lBuildingLvl.CostTime = 475200;
  lBuildingLvl.Reword.Exp = 15845;
  lBuildingLvl.kingdomPoint = 176000;
  lBuildingLvl.Reword.Power = 72200;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 342 } };
  lBuildingLvl.CostWEs = { { 301901, 258} };
  
  // [93] = {
  lBuilding.Lvls[93] = {};
  lBuildingLvl = lBuilding.Lvls[93];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 93;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5200000},
    { EResource::Wood, 5200000},
    { EResource::Iron, 460000},
    { EResource::Mithril, 230000},
    { EResource::Crystal, 27500}
  };
  lBuildingLvl.CostTime = 482400;
  lBuildingLvl.Reword.Exp = 16085;
  lBuildingLvl.kingdomPoint = 178666;
  lBuildingLvl.Reword.Power = 73300;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 344 } };
  lBuildingLvl.CostWEs = { { 301901, 282} };
  
  // [94] = {
  lBuilding.Lvls[94] = {};
  lBuildingLvl = lBuilding.Lvls[94];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 94;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5300000},
    { EResource::Wood, 5300000},
    { EResource::Iron, 465000},
    { EResource::Mithril, 232500},
    { EResource::Crystal, 30000}
  };
  lBuildingLvl.CostTime = 489600;
  lBuildingLvl.Reword.Exp = 16325;
  lBuildingLvl.kingdomPoint = 181333;
  lBuildingLvl.Reword.Power = 74400;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 346 } };
  lBuildingLvl.CostWEs = { { 301901, 306} };
  
  // [95] = {
  lBuilding.Lvls[95] = {};
  lBuildingLvl = lBuilding.Lvls[95];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 95;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5400000},
    { EResource::Wood, 5400000},
    { EResource::Iron, 470000},
    { EResource::Mithril, 235000},
    { EResource::Crystal, 32500}
  };
  lBuildingLvl.CostTime = 496800;
  lBuildingLvl.Reword.Exp = 16565;
  lBuildingLvl.kingdomPoint = 184000;
  lBuildingLvl.Reword.Power = 75500;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 348 } };
  lBuildingLvl.CostWEs = { { 301901, 330} };
  
  // [96] = {
  lBuilding.Lvls[96] = {};
  lBuildingLvl = lBuilding.Lvls[96];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 96;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5500000},
    { EResource::Wood, 5500000},
    { EResource::Iron, 475000},
    { EResource::Mithril, 237500},
    { EResource::Crystal, 35000}
  };
  lBuildingLvl.CostTime = 504000;
  lBuildingLvl.Reword.Exp = 16805;
  lBuildingLvl.kingdomPoint = 186666;
  lBuildingLvl.Reword.Power = 76600;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 350 } };
  lBuildingLvl.CostWEs = { { 301901, 354} };
  
  // [97] = {
  lBuilding.Lvls[97] = {};
  lBuildingLvl = lBuilding.Lvls[97];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 97;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5600000},
    { EResource::Wood, 5600000},
    { EResource::Iron, 480000},
    { EResource::Mithril, 240000},
    { EResource::Crystal, 37500}
  };
  lBuildingLvl.CostTime = 511200;
  lBuildingLvl.Reword.Exp = 17045;
  lBuildingLvl.kingdomPoint = 189333;
  lBuildingLvl.Reword.Power = 77700;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 352 } };
  lBuildingLvl.CostWEs = { { 301901, 378} };
  
  // [98] = {
  lBuilding.Lvls[98] = {};
  lBuildingLvl = lBuilding.Lvls[98];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 98;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5700000},
    { EResource::Wood, 5700000},
    { EResource::Iron, 485000},
    { EResource::Mithril, 242500},
    { EResource::Crystal, 40000}
  };
  lBuildingLvl.CostTime = 518400;
  lBuildingLvl.Reword.Exp = 17285;
  lBuildingLvl.kingdomPoint = 192000;
  lBuildingLvl.Reword.Power = 78800;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 354 } };
  lBuildingLvl.CostWEs = { { 301901, 402} };
  
  // [99] = {
  lBuilding.Lvls[99] = {};
  lBuildingLvl = lBuilding.Lvls[99];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 99;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5800000},
    { EResource::Wood, 5800000},
    { EResource::Iron, 490000},
    { EResource::Mithril, 245000},
    { EResource::Crystal, 43000}
  };
  lBuildingLvl.CostTime = 525600;
  lBuildingLvl.Reword.Exp = 17525;
  lBuildingLvl.kingdomPoint = 194666;
  lBuildingLvl.Reword.Power = 79900;
  lBuildingLvl.atkAdd = 110000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 356 } };
  lBuildingLvl.CostWEs = { { 301901, 426} };
  
  // [100] = {
  lBuilding.Lvls[100] = {};
  lBuildingLvl = lBuilding.Lvls[100];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 100;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 100} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 5900000},
    { EResource::Wood, 5900000},
    { EResource::Iron, 495000},
    { EResource::Mithril, 247500},
    { EResource::Crystal, 45500}
  };
  lBuildingLvl.CostTime = 532800;
  lBuildingLvl.Reword.Exp = 17765;
  lBuildingLvl.kingdomPoint = 197333;
  lBuildingLvl.Reword.Power = 81000;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 358 } };
  lBuildingLvl.CostWEs = { { 301901, 450} };
  
  // [101] = {
  lBuilding.Lvls[101] = {};
  lBuildingLvl = lBuilding.Lvls[101];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 101;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6000000},
    { EResource::Wood, 6000000},
    { EResource::Iron, 500000},
    { EResource::Mithril, 250000},
    { EResource::Crystal, 48500}
  };
  lBuildingLvl.CostTime = 540000;
  lBuildingLvl.Reword.Exp = 18005;
  lBuildingLvl.kingdomPoint = 200000;
  lBuildingLvl.Reword.Power = 82100;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 360 } };
  lBuildingLvl.CostWEs = { { 301901, 480} };
  
  // [102] = {
  lBuilding.Lvls[102] = {};
  lBuildingLvl = lBuilding.Lvls[102];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 102;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6100000},
    { EResource::Wood, 6100000},
    { EResource::Iron, 505000},
    { EResource::Mithril, 252500},
    { EResource::Crystal, 51500}
  };
  lBuildingLvl.CostTime = 547200;
  lBuildingLvl.Reword.Exp = 18245;
  lBuildingLvl.kingdomPoint = 202666;
  lBuildingLvl.Reword.Power = 83200;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 362 } };
  lBuildingLvl.CostWEs = { { 301901, 510} };
  
  // [103] = {
  lBuilding.Lvls[103] = {};
  lBuildingLvl = lBuilding.Lvls[103];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 103;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6200000},
    { EResource::Wood, 6200000},
    { EResource::Iron, 510000},
    { EResource::Mithril, 255000},
    { EResource::Crystal, 54000}
  };
  lBuildingLvl.CostTime = 554400;
  lBuildingLvl.Reword.Exp = 18485;
  lBuildingLvl.kingdomPoint = 205333;
  lBuildingLvl.Reword.Power = 84300;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 364 } };
  lBuildingLvl.CostWEs = { { 301901, 540} };
  
  // [104] = {
  lBuilding.Lvls[104] = {};
  lBuildingLvl = lBuilding.Lvls[104];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 104;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6300000},
    { EResource::Wood, 6300000},
    { EResource::Iron, 515000},
    { EResource::Mithril, 257500},
    { EResource::Crystal, 57000}
  };
  lBuildingLvl.CostTime = 561600;
  lBuildingLvl.Reword.Exp = 18725;
  lBuildingLvl.kingdomPoint = 208000;
  lBuildingLvl.Reword.Power = 85400;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 366 } };
  lBuildingLvl.CostWEs = { { 301901, 570} };
  
  // [105] = {
  lBuilding.Lvls[105] = {};
  lBuildingLvl = lBuilding.Lvls[105];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 105;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6400000},
    { EResource::Wood, 6400000},
    { EResource::Iron, 520000},
    { EResource::Mithril, 260000},
    { EResource::Crystal, 60000}
  };
  lBuildingLvl.CostTime = 568800;
  lBuildingLvl.Reword.Exp = 18965;
  lBuildingLvl.kingdomPoint = 210666;
  lBuildingLvl.Reword.Power = 86500;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 368 } };
  lBuildingLvl.CostWEs = { { 301901, 600} };
  
  // [106] = {
  lBuilding.Lvls[106] = {};
  lBuildingLvl = lBuilding.Lvls[106];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 106;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6500000},
    { EResource::Wood, 6500000},
    { EResource::Iron, 525000},
    { EResource::Mithril, 262500},
    { EResource::Crystal, 63000}
  };
  lBuildingLvl.CostTime = 576000;
  lBuildingLvl.Reword.Exp = 19205;
  lBuildingLvl.kingdomPoint = 213333;
  lBuildingLvl.Reword.Power = 87600;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 370 } };
  lBuildingLvl.CostWEs = { { 301901, 630} };
  
  // [107] = {
  lBuilding.Lvls[107] = {};
  lBuildingLvl = lBuilding.Lvls[107];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 107;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6600000},
    { EResource::Wood, 6600000},
    { EResource::Iron, 530000},
    { EResource::Mithril, 265000},
    { EResource::Crystal, 66500}
  };
  lBuildingLvl.CostTime = 583200;
  lBuildingLvl.Reword.Exp = 19445;
  lBuildingLvl.kingdomPoint = 216000;
  lBuildingLvl.Reword.Power = 88700;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 372 } };
  lBuildingLvl.CostWEs = { { 301901, 660} };
  
  // [108] = {
  lBuilding.Lvls[108] = {};
  lBuildingLvl = lBuilding.Lvls[108];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 108;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6700000},
    { EResource::Wood, 6700000},
    { EResource::Iron, 535000},
    { EResource::Mithril, 267500},
    { EResource::Crystal, 69500}
  };
  lBuildingLvl.CostTime = 590400;
  lBuildingLvl.Reword.Exp = 19685;
  lBuildingLvl.kingdomPoint = 218666;
  lBuildingLvl.Reword.Power = 89800;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 374 } };
  lBuildingLvl.CostWEs = { { 301901, 690} };
  
  // [109] = {
  lBuilding.Lvls[109] = {};
  lBuildingLvl = lBuilding.Lvls[109];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 109;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6800000},
    { EResource::Wood, 6800000},
    { EResource::Iron, 540000},
    { EResource::Mithril, 270000},
    { EResource::Crystal, 72500}
  };
  lBuildingLvl.CostTime = 597600;
  lBuildingLvl.Reword.Exp = 19925;
  lBuildingLvl.kingdomPoint = 221333;
  lBuildingLvl.Reword.Power = 90900;
  lBuildingLvl.atkAdd = 120000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 376 } };
  lBuildingLvl.CostWEs = { { 301901, 720} };
  
  // [110] = {
  lBuilding.Lvls[110] = {};
  lBuildingLvl = lBuilding.Lvls[110];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 110;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 110} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 6900000},
    { EResource::Wood, 6900000},
    { EResource::Iron, 545000},
    { EResource::Mithril, 272500},
    { EResource::Crystal, 76000}
  };
  lBuildingLvl.CostTime = 604800;
  lBuildingLvl.Reword.Exp = 20165;
  lBuildingLvl.kingdomPoint = 224000;
  lBuildingLvl.Reword.Power = 92000;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 378 } };
  lBuildingLvl.CostWEs = { { 301901, 750} };
  
  // [111] = {
  lBuilding.Lvls[111] = {};
  lBuildingLvl = lBuilding.Lvls[111];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 111;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7000000},
    { EResource::Wood, 7000000},
    { EResource::Iron, 550000},
    { EResource::Mithril, 275000},
    { EResource::Crystal, 79000}
  };
  lBuildingLvl.CostTime = 612000;
  lBuildingLvl.Reword.Exp = 20405;
  lBuildingLvl.kingdomPoint = 226666;
  lBuildingLvl.Reword.Power = 93100;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 380 } };
  lBuildingLvl.CostWEs = { { 301901, 786} };
  
  // [112] = {
  lBuilding.Lvls[112] = {};
  lBuildingLvl = lBuilding.Lvls[112];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 112;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7100000},
    { EResource::Wood, 7100000},
    { EResource::Iron, 555000},
    { EResource::Mithril, 277500},
    { EResource::Crystal, 82500}
  };
  lBuildingLvl.CostTime = 619200;
  lBuildingLvl.Reword.Exp = 20645;
  lBuildingLvl.kingdomPoint = 229333;
  lBuildingLvl.Reword.Power = 94200;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 382 } };
  lBuildingLvl.CostWEs = { { 301901, 822} };
  
  // [113] = {
  lBuilding.Lvls[113] = {};
  lBuildingLvl = lBuilding.Lvls[113];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 113;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7200000},
    { EResource::Wood, 7200000},
    { EResource::Iron, 560000},
    { EResource::Mithril, 280000},
    { EResource::Crystal, 85500}
  };
  lBuildingLvl.CostTime = 626400;
  lBuildingLvl.Reword.Exp = 20885;
  lBuildingLvl.kingdomPoint = 232000;
  lBuildingLvl.Reword.Power = 95300;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 384 } };
  lBuildingLvl.CostWEs = { { 301901, 858} };
  
  // [114] = {
  lBuilding.Lvls[114] = {};
  lBuildingLvl = lBuilding.Lvls[114];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 114;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7300000},
    { EResource::Wood, 7300000},
    { EResource::Iron, 565000},
    { EResource::Mithril, 282500},
    { EResource::Crystal, 89000}
  };
  lBuildingLvl.CostTime = 633600;
  lBuildingLvl.Reword.Exp = 21125;
  lBuildingLvl.kingdomPoint = 234666;
  lBuildingLvl.Reword.Power = 96400;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 386 } };
  lBuildingLvl.CostWEs = { { 301901, 894} };
  
  // [115] = {
  lBuilding.Lvls[115] = {};
  lBuildingLvl = lBuilding.Lvls[115];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 115;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7400000},
    { EResource::Wood, 7400000},
    { EResource::Iron, 570000},
    { EResource::Mithril, 285000},
    { EResource::Crystal, 92500}
  };
  lBuildingLvl.CostTime = 640800;
  lBuildingLvl.Reword.Exp = 21365;
  lBuildingLvl.kingdomPoint = 237333;
  lBuildingLvl.Reword.Power = 97500;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 388 } };
  lBuildingLvl.CostWEs = { { 301901, 930} };
  
  // [116] = {
  lBuilding.Lvls[116] = {};
  lBuildingLvl = lBuilding.Lvls[116];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 116;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7500000},
    { EResource::Wood, 7500000},
    { EResource::Iron, 575000},
    { EResource::Mithril, 287500},
    { EResource::Crystal, 96000}
  };
  lBuildingLvl.CostTime = 648000;
  lBuildingLvl.Reword.Exp = 21605;
  lBuildingLvl.kingdomPoint = 240000;
  lBuildingLvl.Reword.Power = 98600;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 390 } };
  lBuildingLvl.CostWEs = { { 301901, 966} };
  
  // [117] = {
  lBuilding.Lvls[117] = {};
  lBuildingLvl = lBuilding.Lvls[117];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 117;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7600000},
    { EResource::Wood, 7600000},
    { EResource::Iron, 580000},
    { EResource::Mithril, 290000},
    { EResource::Crystal, 99500}
  };
  lBuildingLvl.CostTime = 655200;
  lBuildingLvl.Reword.Exp = 21845;
  lBuildingLvl.kingdomPoint = 242666;
  lBuildingLvl.Reword.Power = 99700;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 392 } };
  lBuildingLvl.CostWEs = { { 301901, 1002} };
  
  // [118] = {
  lBuilding.Lvls[118] = {};
  lBuildingLvl = lBuilding.Lvls[118];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 118;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7700000},
    { EResource::Wood, 7700000},
    { EResource::Iron, 585000},
    { EResource::Mithril, 292500},
    { EResource::Crystal, 103000}
  };
  lBuildingLvl.CostTime = 662400;
  lBuildingLvl.Reword.Exp = 22085;
  lBuildingLvl.kingdomPoint = 245333;
  lBuildingLvl.Reword.Power = 100800;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 394 } };
  lBuildingLvl.CostWEs = { { 301901, 1038} };
  
  // [119] = {
  lBuilding.Lvls[119] = {};
  lBuildingLvl = lBuilding.Lvls[119];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 119;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7800000},
    { EResource::Wood, 7800000},
    { EResource::Iron, 590000},
    { EResource::Mithril, 295000},
    { EResource::Crystal, 107000}
  };
  lBuildingLvl.CostTime = 669600;
  lBuildingLvl.Reword.Exp = 22325;
  lBuildingLvl.kingdomPoint = 248000;
  lBuildingLvl.Reword.Power = 101900;
  lBuildingLvl.atkAdd = 132000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 396 } };
  lBuildingLvl.CostWEs = { { 301901, 1074} };
  
  // [120] = {
  lBuilding.Lvls[120] = {};
  lBuildingLvl = lBuilding.Lvls[120];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 120;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 120} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 7900000},
    { EResource::Wood, 7900000},
    { EResource::Iron, 595000},
    { EResource::Mithril, 297500},
    { EResource::Crystal, 110500}
  };
  lBuildingLvl.CostTime = 676800;
  lBuildingLvl.Reword.Exp = 22565;
  lBuildingLvl.kingdomPoint = 250666;
  lBuildingLvl.Reword.Power = 103000;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 398 } };
  lBuildingLvl.CostWEs = { { 301901, 1110} };
  
  // [121] = {
  lBuilding.Lvls[121] = {};
  lBuildingLvl = lBuilding.Lvls[121];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 121;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8000000},
    { EResource::Wood, 8000000},
    { EResource::Iron, 600000},
    { EResource::Mithril, 300000},
    { EResource::Crystal, 114500}
  };
  lBuildingLvl.CostTime = 684000;
  lBuildingLvl.Reword.Exp = 22805;
  lBuildingLvl.kingdomPoint = 253333;
  lBuildingLvl.Reword.Power = 104100;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 400 } };
  lBuildingLvl.CostWEs = { { 301901, 1149} };
  
  // [122] = {
  lBuilding.Lvls[122] = {};
  lBuildingLvl = lBuilding.Lvls[122];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 122;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8100000},
    { EResource::Wood, 8100000},
    { EResource::Iron, 605000},
    { EResource::Mithril, 302500},
    { EResource::Crystal, 118000}
  };
  lBuildingLvl.CostTime = 691200;
  lBuildingLvl.Reword.Exp = 23045;
  lBuildingLvl.kingdomPoint = 256000;
  lBuildingLvl.Reword.Power = 105200;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 402 } };
  lBuildingLvl.CostWEs = { { 301901, 1188} };
  
  // [123] = {
  lBuilding.Lvls[123] = {};
  lBuildingLvl = lBuilding.Lvls[123];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 123;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8200000},
    { EResource::Wood, 8200000},
    { EResource::Iron, 610000},
    { EResource::Mithril, 305000},
    { EResource::Crystal, 122000}
  };
  lBuildingLvl.CostTime = 698400;
  lBuildingLvl.Reword.Exp = 23285;
  lBuildingLvl.kingdomPoint = 258666;
  lBuildingLvl.Reword.Power = 106300;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 404 } };
  lBuildingLvl.CostWEs = { { 301901, 1227} };
  
  // [124] = {
  lBuilding.Lvls[124] = {};
  lBuildingLvl = lBuilding.Lvls[124];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 124;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8300000},
    { EResource::Wood, 8300000},
    { EResource::Iron, 615000},
    { EResource::Mithril, 307500},
    { EResource::Crystal, 126000}
  };
  lBuildingLvl.CostTime = 705600;
  lBuildingLvl.Reword.Exp = 23525;
  lBuildingLvl.kingdomPoint = 261333;
  lBuildingLvl.Reword.Power = 107400;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 406 } };
  lBuildingLvl.CostWEs = { { 301901, 1266} };
  
  // [125] = {
  lBuilding.Lvls[125] = {};
  lBuildingLvl = lBuilding.Lvls[125];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 125;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8400000},
    { EResource::Wood, 8400000},
    { EResource::Iron, 620000},
    { EResource::Mithril, 310000},
    { EResource::Crystal, 129500}
  };
  lBuildingLvl.CostTime = 712800;
  lBuildingLvl.Reword.Exp = 23765;
  lBuildingLvl.kingdomPoint = 264000;
  lBuildingLvl.Reword.Power = 108500;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 408 } };
  lBuildingLvl.CostWEs = { { 301901, 1305} };
  
  // [126] = {
  lBuilding.Lvls[126] = {};
  lBuildingLvl = lBuilding.Lvls[126];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 126;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8500000},
    { EResource::Wood, 8500000},
    { EResource::Iron, 625000},
    { EResource::Mithril, 312500},
    { EResource::Crystal, 133500}
  };
  lBuildingLvl.CostTime = 720000;
  lBuildingLvl.Reword.Exp = 24005;
  lBuildingLvl.kingdomPoint = 266666;
  lBuildingLvl.Reword.Power = 109600;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 410 } };
  lBuildingLvl.CostWEs = { { 301901, 1344} };
  
  // [127] = {
  lBuilding.Lvls[127] = {};
  lBuildingLvl = lBuilding.Lvls[127];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 127;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8600000},
    { EResource::Wood, 8600000},
    { EResource::Iron, 630000},
    { EResource::Mithril, 315000},
    { EResource::Crystal, 137500}
  };
  lBuildingLvl.CostTime = 727200;
  lBuildingLvl.Reword.Exp = 24245;
  lBuildingLvl.kingdomPoint = 269333;
  lBuildingLvl.Reword.Power = 110700;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 412 } };
  lBuildingLvl.CostWEs = { { 301901, 1383} };
  
  // [128] = {
  lBuilding.Lvls[128] = {};
  lBuildingLvl = lBuilding.Lvls[128];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 128;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8700000},
    { EResource::Wood, 8700000},
    { EResource::Iron, 635000},
    { EResource::Mithril, 317500},
    { EResource::Crystal, 141500}
  };
  lBuildingLvl.CostTime = 734400;
  lBuildingLvl.Reword.Exp = 24485;
  lBuildingLvl.kingdomPoint = 272000;
  lBuildingLvl.Reword.Power = 111800;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 414 } };
  lBuildingLvl.CostWEs = { { 301901, 1422} };
  
  // [129] = {
  lBuilding.Lvls[129] = {};
  lBuildingLvl = lBuilding.Lvls[129];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 129;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8800000},
    { EResource::Wood, 8800000},
    { EResource::Iron, 640000},
    { EResource::Mithril, 320000},
    { EResource::Crystal, 146000}
  };
  lBuildingLvl.CostTime = 741600;
  lBuildingLvl.Reword.Exp = 24725;
  lBuildingLvl.kingdomPoint = 274666;
  lBuildingLvl.Reword.Power = 112900;
  lBuildingLvl.atkAdd = 145000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 416 } };
  lBuildingLvl.CostWEs = { { 301901, 1461} };
  
  // [130] = {
  lBuilding.Lvls[130] = {};
  lBuildingLvl = lBuilding.Lvls[130];
  lBuildingLvl.BuildingID = EBuilding::ArrowTower;
  lBuildingLvl.lvl = 130;
  lBuildingLvl.PreCond = { {EBuilding::Castle, 130} };
  lBuildingLvl.CostRes = {
    { EResource::Food, 8900000},
    { EResource::Wood, 8900000},
    { EResource::Iron, 645000},
    { EResource::Mithril, 322500},
    { EResource::Crystal, 150000}
  };
  lBuildingLvl.CostTime = 748800;
  lBuildingLvl.Reword.Exp = 24965;
  lBuildingLvl.kingdomPoint = 277333;
  lBuildingLvl.Reword.Power = 114000;
  lBuildingLvl.atkAdd = 160000;
  lBuildingLvl.atkSpeedAdd = 1000;
  lBuildingLvl.baseAtkSpeed = 1;
  lBuildingLvl.gunshot = 15;
  lBuildingLvl.CostItems = { { 300501, 418 } };
  lBuildingLvl.CostWEs = { { 301901, 1500} };
  // }
}