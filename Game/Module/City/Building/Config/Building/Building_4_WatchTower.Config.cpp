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

  // [1] = {
  lBuilding.Lvls[1] = {};
  RBuildingLvlSpecs &lBuildingLvl = lBuilding.Lvls[1];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 1;
  lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 0 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 0;
  lBuildingLvl.Reword.Exp = 0;
  lBuildingLvl.kingdomPoint = 0;
  lBuildingLvl.Reword.Power = 5;
  lBuildingLvl.Reword.Power = 5;
  //   effect = 2001
  // },
  // [2] = {
  lBuilding.Lvls[2] = {};
  lBuildingLvl = lBuilding.Lvls[2];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 2;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 2} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2500 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 60;
  lBuildingLvl.Reword.Exp = 7;
  lBuildingLvl.kingdomPoint = 13;
  lBuildingLvl.Reword.Power = 10;
  //   effect = 2100
  // },
  // [3] = {
  lBuilding.Lvls[3] = {};
  lBuildingLvl = lBuilding.Lvls[3];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 3;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 3} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 4000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 120;
  lBuildingLvl.Reword.Exp = 10;
  lBuildingLvl.kingdomPoint = 28;
  lBuildingLvl.Reword.Power = 25;
  //   effect = 2002
  // },
  // [4] = {
  lBuilding.Lvls[4] = {};
  lBuildingLvl = lBuilding.Lvls[4];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 4;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 4} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 6000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 450;
  lBuildingLvl.Reword.Exp = 25;
  lBuildingLvl.kingdomPoint = 113;
  lBuildingLvl.Reword.Power = 50;
  //   effect = 2201
  // },
  // [5] = {
  lBuilding.Lvls[5] = {};
  lBuildingLvl = lBuilding.Lvls[5];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 5;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 5} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 10000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 1080;
  lBuildingLvl.Reword.Exp = 46;
  lBuildingLvl.kingdomPoint = 280;
  lBuildingLvl.Reword.Power = 95;
  //   effect = 2003
  // },
  // [6] = {
  lBuilding.Lvls[6] = {};
  lBuildingLvl = lBuilding.Lvls[6];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 6;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 6} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 17000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 2160;
  lBuildingLvl.Reword.Exp = 87;
  lBuildingLvl.kingdomPoint = 575;
  lBuildingLvl.Reword.Power = 175;
  //   effect = 2301
  // },
  // [7] = {
  lBuilding.Lvls[7] = {};
  lBuildingLvl = lBuilding.Lvls[7];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 7;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 7} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 35000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 4320;
  lBuildingLvl.Reword.Exp = 128;
  lBuildingLvl.kingdomPoint = 1183;
  lBuildingLvl.Reword.Power = 290;
  //   effect = 2004
  // },
  // [8] = {
  lBuilding.Lvls[8] = {};
  lBuildingLvl = lBuilding.Lvls[8];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 8;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 8} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 52000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 5940;
  lBuildingLvl.Reword.Exp = 174;
  lBuildingLvl.kingdomPoint = 1671;
  lBuildingLvl.Reword.Power = 455;
  //   effect = 2401
  // },
  // [9] = {
  lBuilding.Lvls[9] = {};
  lBuildingLvl = lBuilding.Lvls[9];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 9;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 9} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 77400 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 8010;
  lBuildingLvl.Reword.Exp = 233;
  lBuildingLvl.kingdomPoint = 2313;
  lBuildingLvl.Reword.Power = 645;
  //   effect = 2005
  // },
  // [10] = {
  lBuilding.Lvls[10] = {};
  lBuildingLvl = lBuilding.Lvls[10];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 10;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 10} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 100000 },
    { EResource::Iron, 0 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 10890;
  lBuildingLvl.Reword.Exp = 316;
  lBuildingLvl.kingdomPoint = 3226;
  lBuildingLvl.Reword.Power = 865;
  //   effect = 2202
  // },
  // [11] = {
  lBuilding.Lvls[11] = {};
  lBuildingLvl = lBuilding.Lvls[11];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 11;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 11} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 120000 },
    { EResource::Iron, 8000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 14760;
  lBuildingLvl.Reword.Exp = 426;
  lBuildingLvl.kingdomPoint = 4481;
  lBuildingLvl.Reword.Power = 1130;
  //   effect = 2006
  // },
  // [12] = {
  lBuilding.Lvls[12] = {};
  lBuildingLvl = lBuilding.Lvls[12];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 12;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 12} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 160000 },
    { EResource::Iron, 16000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 20070;
  lBuildingLvl.Reword.Exp = 578;
  lBuildingLvl.kingdomPoint = 6243;
  lBuildingLvl.Reword.Power = 1455;
  //   effect = 2302
  // },
  // [13] = {
  lBuilding.Lvls[13] = {};
  lBuildingLvl = lBuilding.Lvls[13];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 13;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 13} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 306000 },
    { EResource::Iron, 30600 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 27000;
  lBuildingLvl.Reword.Exp = 776;
  lBuildingLvl.kingdomPoint = 8600;
  lBuildingLvl.Reword.Power = 1845;
  //   effect = 2007
  // },
  // [14] = {
  lBuilding.Lvls[14] = {};
  lBuildingLvl = lBuilding.Lvls[14];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 14;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 14} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 550000 },
    { EResource::Iron, 55000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 36720;
  lBuildingLvl.Reword.Exp = 1054;
  lBuildingLvl.kingdomPoint = 11966;
  lBuildingLvl.Reword.Power = 2330;
  //   effect = 2500
  // },
  // [15] = {
  lBuilding.Lvls[15] = {};
  lBuildingLvl = lBuilding.Lvls[15];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 15;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 15} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 840000 },
    { EResource::Iron, 84000 },
    { EResource::Mithril, 0 }
  };
  lBuildingLvl.CostTime = 49680;
  lBuildingLvl.Reword.Exp = 1424;
  lBuildingLvl.kingdomPoint = 16560;
  lBuildingLvl.Reword.Power = 2915;
  //   effect = 2011
  // },
  // [16] = {
  lBuilding.Lvls[16] = {};
  lBuildingLvl = lBuilding.Lvls[16];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 16;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 16} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1100000 },
    { EResource::Iron, 110000 },
    { EResource::Mithril, 17000 }
  };
  lBuildingLvl.CostTime = 66960;
  lBuildingLvl.Reword.Exp = 1918;
  lBuildingLvl.kingdomPoint = 22815;
  lBuildingLvl.Reword.Power = 3635;
  //   effect = 2402
  // },
  // [17] = {
  lBuilding.Lvls[17] = {};
  lBuildingLvl = lBuilding.Lvls[17];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 17;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 17} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 1540000 },
    { EResource::Iron, 154000 },
    { EResource::Mithril, 24000 }
  };
  lBuildingLvl.CostTime = 90720;
  lBuildingLvl.Reword.Exp = 2597;
  lBuildingLvl.kingdomPoint = 31583;
  lBuildingLvl.Reword.Power = 4510;
  //   effect = 2102
  // },
  // [18] = {
  lBuilding.Lvls[18] = {};
  lBuildingLvl = lBuilding.Lvls[18];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 18;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 18} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2000000 },
    { EResource::Iron, 200000 },
    { EResource::Mithril, 32000 }
  };
  lBuildingLvl.CostTime = 103680;
  lBuildingLvl.Reword.Exp = 2967;
  lBuildingLvl.kingdomPoint = 36863;
  lBuildingLvl.Reword.Power = 5585;
  //   effect = 2203
  // },
  // [19] = {
  lBuilding.Lvls[19] = {};
  lBuildingLvl = lBuilding.Lvls[19];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 19;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 19} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 2600000 },
    { EResource::Iron, 260000 },
    { EResource::Mithril, 41000 }
  };
  lBuildingLvl.CostTime = 116640;
  lBuildingLvl.Reword.Exp = 3337;
  lBuildingLvl.kingdomPoint = 42335;
  lBuildingLvl.Reword.Power = 6895;
  //   effect = 2012
  // },
  // [20] = {
  lBuilding.Lvls[20] = {};
  lBuildingLvl = lBuilding.Lvls[20];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 20;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 20} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 3200000 },
    { EResource::Iron, 320000 },
    { EResource::Mithril, 51000 }
  };
  lBuildingLvl.CostTime = 132840;
  lBuildingLvl.Reword.Exp = 3800;
  lBuildingLvl.kingdomPoint = 49200;
  lBuildingLvl.Reword.Power = 8495;
  //   effect = 2303
  // },
  // [21] = {
  lBuilding.Lvls[21] = {};
  lBuildingLvl = lBuilding.Lvls[21];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 21;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 21} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 4000000 },
    { EResource::Iron, 400000 },
    { EResource::Mithril, 64000 }
  };
  lBuildingLvl.CostTime = 152280;
  lBuildingLvl.Reword.Exp = 4355;
  lBuildingLvl.kingdomPoint = 56400;
  lBuildingLvl.Reword.Power = 10315;
  //   effect = 2103
  // },
  // [22] = {
  lBuilding.Lvls[22] = {};
  lBuildingLvl = lBuilding.Lvls[22];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 22;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 22} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 5000000 },
    { EResource::Iron, 500000 },
    { EResource::Mithril, 80000 }
  };
  lBuildingLvl.CostTime = 174960;
  lBuildingLvl.Reword.Exp = 5003;
  lBuildingLvl.kingdomPoint = 64800;
  lBuildingLvl.Reword.Power = 12375;
  //   effect = 2403
  // },
  // [23] = {
  lBuilding.Lvls[23] = {};
  lBuildingLvl = lBuilding.Lvls[23];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 23;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 23} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 6000000 },
    { EResource::Iron, 600000 },
    { EResource::Mithril, 96000 }
  };
  lBuildingLvl.CostTime = 200880;
  lBuildingLvl.Reword.Exp = 5744;
  lBuildingLvl.kingdomPoint = 74400;
  lBuildingLvl.Reword.Power = 14710;
  //   effect = 0
  // },
  // [24] = {
  lBuilding.Lvls[24] = {};
  lBuildingLvl = lBuilding.Lvls[24];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 24;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 24} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 8000000 },
    { EResource::Iron, 800000 },
    { EResource::Mithril, 128000 }
  };
  lBuildingLvl.CostTime = 231120;
  lBuildingLvl.Reword.Exp = 6608;
  lBuildingLvl.kingdomPoint = 85600;
  lBuildingLvl.Reword.Power = 17360;
  //   effect = 2600
  // },
  // [25] = {
  lBuilding.Lvls[25] = {};
  lBuildingLvl = lBuilding.Lvls[25];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 25;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 25} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 11000000 },
    { EResource::Iron, 1100000 },
    { EResource::Mithril, 176000 }
  };
  lBuildingLvl.CostTime = 265680;
  lBuildingLvl.Reword.Exp = 7595;
  lBuildingLvl.kingdomPoint = 98400;
  lBuildingLvl.Reword.Power = 20365;
  //   effect = 0
  // },
  // [26] = {
  lBuilding.Lvls[26] = {};
  lBuildingLvl = lBuilding.Lvls[26];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 26;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 26} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 15000000 },
    { EResource::Iron, 1500000 },
    { EResource::Mithril, 240000 }
  };
  lBuildingLvl.CostTime = 304560;
  lBuildingLvl.Reword.Exp = 8706;
  lBuildingLvl.kingdomPoint = 112800;
  lBuildingLvl.Reword.Power = 23770;
  //   effect = 2008
  // },
  // [27] = {
  lBuilding.Lvls[27] = {};
  lBuildingLvl = lBuilding.Lvls[27];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 27;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 27} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 20000000 },
    { EResource::Iron, 2000000 },
    { EResource::Mithril, 320000 }
  };
  lBuildingLvl.CostTime = 347760;
  lBuildingLvl.Reword.Exp = 9941;
  lBuildingLvl.kingdomPoint = 128800;
  lBuildingLvl.Reword.Power = 27630;
  //   effect = 2101
  // },
  // [28] = {
  lBuilding.Lvls[28] = {};
  lBuildingLvl = lBuilding.Lvls[28];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 28;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 28} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 26000000 },
    { EResource::Iron, 2600000 },
    { EResource::Mithril, 416000 }
  };
  lBuildingLvl.CostTime = 395280;
  lBuildingLvl.Reword.Exp = 11298;
  lBuildingLvl.kingdomPoint = 146400;
  lBuildingLvl.Reword.Power = 32015;
  //   effect = 2700
  // },
  // [29] = {
  lBuilding.Lvls[29] = {};
  lBuildingLvl = lBuilding.Lvls[29];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 29;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 29} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 34000000 },
    { EResource::Iron, 3400000 },
    { EResource::Mithril, 544000 }
  };
  lBuildingLvl.CostTime = 447120;
  lBuildingLvl.Reword.Exp = 12779;
  lBuildingLvl.kingdomPoint = 165600;
  lBuildingLvl.Reword.Power = 36980;
  //   effect = 2009
  // },
  // [30] = {
  lBuilding.Lvls[30] = {};
  lBuildingLvl = lBuilding.Lvls[30];
  lBuildingLvl.BuildingID = EBuilding::WatchTower;
  lBuildingLvl.lvl = 30;
  lBuildingLvl.PreCond = { {EBuilding::Farm, 30} };
   lBuildingLvl.CostRes = {
    { EResource::Food, 0 },
    { EResource::Wood, 44000000 },
    { EResource::Iron, 4400000 },
    { EResource::Mithril, 704000 }
  };
  lBuildingLvl.CostTime = 511920;
  lBuildingLvl.Reword.Exp = 14631;
  lBuildingLvl.kingdomPoint = 189600;
  lBuildingLvl.Reword.Power = 41615;
  //   effect = 2800
  // }
}