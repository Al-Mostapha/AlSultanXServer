#include "Building.Config.h"
#include <QSharedPointer>
#include <QPointer>

void CBuilding::InitCastle(){
  QPointer<RBuildingSpecs> lPointer(new RBuildingSpecs);
  // _BuildingSpecs.insert(EBuilding::Castle, lPointer);
  // RBuildingSpecs &lBuilding = *_BuildingSpecs[EBuilding::Castle]; // 101
  // lBuilding.index = 1;
  // lBuilding.BuildingID = EBuilding::Castle;
  // lBuilding.oldUnlocklevel = 1;
  // lBuilding.oldShowlevel = 1;
  // lBuilding.unlocklevel = 1;
  // lBuilding.showlevel = 1;
  // lBuilding.bType = EBuildingPlace::Inner;
  // lBuilding.maxCount = 1;
  // lBuilding.isDemolish = false;
  // lBuilding.isExchange = false;
  // lBuilding.isBuild = false;
  // lBuilding.isUpgrade = true;
  // lBuilding.maxLvl = 130;
  // lBuilding.initLvl = 1;
  // lBuilding.openWl = true;
  // lBuilding.openStar = true;
  // lBuilding.maxStarLv = 70;

  // lBuilding.BuildingName = "buildDes_name_101";
  // lBuilding.BuildingIcon = "quest_building_101.png";
  // lBuilding.BuildingBrief = "";
  // lBuilding.UpgradeBrief = "buildDes_upgrade_brief_101";
  // lBuilding.Describe = "buildDes_describe_101";
  // lBuilding.WarDescribe = "buildDes_upgrade_brief_301";
  // lBuilding.StarDescribe = "star_describe_101";

  // lBuilding.TipButtons.bid = 101;
  // lBuilding.TipButtons.BuildingName = "buildDes_name_101";
  // lBuilding.TipButtons.PicFile = "#pic400000_2.png";
  // lBuilding.TipButtons.ImgFile = "pic400000_2.png";
  // lBuilding.TipButtons.Offset = {0, -30};
  // lBuilding.TipButtons.OffsetByzantine = {0, -30};
  // lBuilding.TipButtons.bIsInnerBuilding = true;
  // lBuilding.TipButtons.bCanBuild = false;
  // lBuilding.TipButtons.NormalOperateList = {
  //   EBuildingTips::OpDetails,
  //   EBuildingTips::OpUpgrade,
  //   EBuildingTips::OpCityInfo,
  //   EBuildingTips::OpCityBuff,
  //   EBuildingTips::OpCityDecorate
  // };
  // lBuilding.TipButtons.CoolingOperateList = {
  //   EBuildingTips::OpDetails,
  //   EBuildingTips::OpSpeedUpByGold,
  //   EBuildingTips::OpCityInfo,
  //   EBuildingTips::OpCityBuff,
  //   EBuildingTips::OpCityDecorate
  // };
  // lBuilding.TipButtons.CoolingOperateList = {
  //   EBuildingTips::OpNone,
  //   EBuildingTips::OpNone,
  //   EBuildingTips::OpNone,
  //   EBuildingTips::OpNone,
  //   EBuildingTips::OpNone
  // };

  // lBuilding.Lvls[1] = {}; // index = 1,
  // lBuilding.Lvls[1].BuildingID = EBuilding::Castle;
  // lBuilding.Lvls[1].lvl = 1; 
  // lBuilding.Lvls[1].kingdomLv = 0;
  // lBuilding.Lvls[1].PreCond = {};
  // lBuilding.Lvls[1].CostRes = {
  //   { EResource::Food, 0 },
  //   { EResource::Wood, 0 },
  //   { EResource::Iron, 0 },
  //   { EResource::Mithril, 0 }
  // };
  // lBuilding.Lvls[1]._CostTime = 0;
  // lBuilding.Lvls[1].Reword.exp = 0;
  // lBuilding.Lvls[1].kingdomPoint = 0;
  // lBuilding.Lvls[1].Reword.power = 25;
  // lBuilding.Lvls[1].unlockedBuild = EBuilding::Barrack;

  // lBuilding.Lvls[2] = {};
  // lBuilding.Lvls[2].BuildingID = EBuilding::Castle;
  // lBuilding.Lvls[2].lvl = 2;
  // lBuilding.Lvls[2].kingdomLv = 0;
  // lBuilding.Lvls[2].CostRes = {
  //   { EResource::Food, 2800 },
  //   { EResource::Wood, 2800 },
  //   { EResource::Iron, 0 },
  //   { EResource::Mithril, 0 }
  // };
  // lBuilding.Lvls[2]._CostTime = 210;
  // lBuilding.Lvls[2].Reword.exp = 13;
  // lBuilding.Lvls[2].kingdomPoint = 48;
  // lBuilding.Lvls[2].Reword.power = 70;
  // lBuilding.Lvls[2].unlockedBuild = EBuilding::Institute;

  // lBuilding.Lvls[3] = {};
  // lBuilding.Lvls[3].BuildingID = EBuilding::Castle;
  // lBuilding.Lvls[3].lvl = 3;
  // lBuilding.Lvls[3].kingdomLv = 0;
  // lBuilding.Lvls[3].PreCond = {
  //   {EBuilding::Wall, 2},
  //   {EBuilding::LumberMill, 2},
  //   {EBuilding::Depot, 2}
  // };
  // lBuilding.Lvls[3].CostRes = {
  //   { EResource::Food, 4000 },
  //   { EResource::Wood, 4000 },
  //   { EResource::Iron, 0 },
  //   { EResource::Mithril, 0 }
  // };
  // lBuilding.Lvls[3]._CostTime = 290;
  // lBuilding.Lvls[3].Reword.exp = 22;
  // lBuilding.Lvls[3].kingdomPoint = 101;
  // lBuilding.Lvls[3].Reword.power = 145;
  // lBuilding.Lvls[3].unlockedBuild = EBuilding::TargetRange;

  // lBuilding.Lvls[4] = {};
  // lBuilding.Lvls[4].BuildingID = EBuilding::Castle;
  // lBuilding.Lvls[4].lvl = 4;
  // lBuilding.Lvls[4].kingdomLv = 0;
  // lBuilding.Lvls[4].PreCond = {
  //   {EBuilding::Wall, 3},
  //   {EBuilding::Farm, 3},
  // };
  // lBuilding.Lvls[4].CostRes = {
  //   { EResource::Food, 6000 }, { EResource::Wood, 6000 },
  //   { EResource::Iron, 0 }, { EResource::Mithril, 0 }
  // };
  // lBuilding.Lvls[4]._CostTime = 1500;
  // lBuilding.Lvls[4].Reword.exp = 73;
  // lBuilding.Lvls[4].kingdomPoint = 376;
  // lBuilding.Lvls[4].Reword.power = 280;
  // lBuilding.Lvls[4].unlockedBuild = EBuilding::Fortress;


  // lBuilding.Lvls[5] = {};
  // lBuilding.Lvls[5].BuildingID = EBuilding::Castle;
  // lBuilding.Lvls[5].lvl = 5;
  // lBuilding.Lvls[5].kingdomLv = 0;
  // lBuilding.Lvls[5].PreCond = {
  //   {EBuilding::Wall, 4},
  //   {EBuilding::Barrack, 4},
  //   {EBuilding::DrillGrounds, 4}
  // };
  // lBuilding.Lvls[5].CostRes = {
  //   {EResource::Food, 1e4}, {EResource::Wood, 1e4},
  //   {EResource::Iron, 0}, {EResource::Mithril, 0}
  // };
  // lBuilding.Lvls[5]._CostTime = 3600;
  // lBuilding.Lvls[5].Reword.exp = 142;
  // lBuilding.Lvls[5].kingdomPoint = 933;
  // lBuilding.Lvls[5].Reword.power = 530;
  // lBuilding.Lvls[5].unlockedBuild = EBuilding::ChariotPlant;
  //   [6] = {
  //     index = 6,
  //     bid = 101,
  //     blv = 6,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       5,
  //       206,
  //       5
  //     },
  //     costRes = {
  //       1002,
  //       17000,
  //       1003,
  //       17000,
  //       1004,
  //       0,
  //       1005,
  //       0
  //     },
  //     costTime = 7200,
  //     exp = 279,
  //     kingdomPoint = 1920,
  //     power = 960,
  //     unlockedBuild = 111,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [7] = {
  //     index = 7,
  //     bid = 101,
  //     blv = 7,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       6,
  //       105,
  //       6,
  //       113,
  //       6
  //     },
  //     costRes = {
  //       1002,
  //       35000,
  //       1003,
  //       35000,
  //       1004,
  //       0,
  //       1005,
  //       0
  //     },
  //     costTime = 14400,
  //     exp = 416,
  //     kingdomPoint = 3946,
  //     power = 1610,
  //     unlockedBuild = 114,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [8] = {
  //     index = 8,
  //     bid = 101,
  //     blv = 8,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       7,
  //       116,
  //       7,
  //       118,
  //       7
  //     },
  //     costRes = {
  //       1002,
  //       65000,
  //       1003,
  //       65000,
  //       1004,
  //       0,
  //       1005,
  //       0
  //     },
  //     costTime = 19800,
  //     exp = 570,
  //     kingdomPoint = 5573,
  //     power = 2495,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [9] = {
  //     index = 9,
  //     bid = 101,
  //     blv = 9,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       8,
  //       117,
  //       8
  //     },
  //     costRes = {
  //       1002,
  //       129000,
  //       1003,
  //       129000,
  //       1004,
  //       0,
  //       1005,
  //       0
  //     },
  //     costTime = 26700,
  //     exp = 767,
  //     kingdomPoint = 7713,
  //     power = 3535,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [10] = {
  //     index = 10,
  //     bid = 101,
  //     blv = 10,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       9,
  //       119,
  //       9
  //     },
  //     costRes = {
  //       1002,
  //       250000,
  //       1003,
  //       250000,
  //       1004,
  //       0,
  //       1005,
  //       0
  //     },
  //     costTime = 36300,
  //     exp = 1042,
  //     kingdomPoint = 10755,
  //     power = 4760,
  //     unlockedBuild = 203,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [11] = {
  //     index = 11,
  //     bid = 101,
  //     blv = 11,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       10,
  //       118,
  //       10,
  //       121,
  //       10
  //     },
  //     costRes = {
  //       1002,
  //       400000,
  //       1003,
  //       400000,
  //       1004,
  //       40000,
  //       1005,
  //       0
  //     },
  //     costTime = 49200,
  //     exp = 1410,
  //     kingdomPoint = 14941,
  //     power = 6200,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [12] = {
  //     index = 12,
  //     bid = 101,
  //     blv = 12,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       11,
  //       206,
  //       11
  //     },
  //     costRes = {
  //       1002,
  //       800000,
  //       1003,
  //       800000,
  //       1004,
  //       80000,
  //       1005,
  //       0
  //     },
  //     costTime = 66900,
  //     exp = 1916,
  //     kingdomPoint = 20813,
  //     power = 7965,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [13] = {
  //     index = 13,
  //     bid = 101,
  //     blv = 13,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       12,
  //       121,
  //       12
  //     },
  //     costRes = {
  //       1002,
  //       1530000,
  //       1003,
  //       1530000,
  //       1004,
  //       153000,
  //       1005,
  //       0
  //     },
  //     costTime = 90000,
  //     exp = 2576,
  //     kingdomPoint = 28666,
  //     power = 10120,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [14] = {
  //     index = 14,
  //     bid = 101,
  //     blv = 14,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       13,
  //       118,
  //       13,
  //       121,
  //       13
  //     },
  //     costRes = {
  //       1002,
  //       2750000,
  //       1003,
  //       2750000,
  //       1004,
  //       275000,
  //       1005,
  //       0
  //     },
  //     costTime = 122400,
  //     exp = 3502,
  //     kingdomPoint = 39893,
  //     power = 12755,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [15] = {
  //     index = 15,
  //     bid = 101,
  //     blv = 15,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       14,
  //       117,
  //       14
  //     },
  //     costRes = {
  //       1002,
  //       4200000,
  //       1003,
  //       4200000,
  //       1004,
  //       420000,
  //       1005,
  //       0
  //     },
  //     costTime = 165600,
  //     exp = 4736,
  //     kingdomPoint = 55200,
  //     power = 15970,
  //     unlockedBuild = 204,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [16] = {
  //     index = 16,
  //     bid = 101,
  //     blv = 16,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       15,
  //       204,
  //       15
  //     },
  //     costRes = {
  //       1002,
  //       5500000,
  //       1003,
  //       5500000,
  //       1004,
  //       550000,
  //       1005,
  //       34000
  //     },
  //     costTime = 223200,
  //     exp = 6382,
  //     kingdomPoint = 76053,
  //     power = 19905,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [17] = {
  //     index = 17,
  //     bid = 101,
  //     blv = 17,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       16,
  //       203,
  //       16
  //     },
  //     costRes = {
  //       1002,
  //       7700000,
  //       1003,
  //       7700000,
  //       1004,
  //       770000,
  //       1005,
  //       48000
  //     },
  //     costTime = 302400,
  //     exp = 8645,
  //     kingdomPoint = 105280,
  //     power = 24710,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [18] = {
  //     index = 18,
  //     bid = 101,
  //     blv = 18,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       17,
  //       201,
  //       17
  //     },
  //     costRes = {
  //       1002,
  //       10000000,
  //       1003,
  //       10000000,
  //       1004,
  //       1000000,
  //       1005,
  //       62000
  //     },
  //     costTime = 345600,
  //     exp = 9879,
  //     kingdomPoint = 122880,
  //     power = 30580,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [19] = {
  //     index = 19,
  //     bid = 101,
  //     blv = 19,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       18,
  //       113,
  //       18
  //     },
  //     costRes = {
  //       1002,
  //       13000000,
  //       1003,
  //       13000000,
  //       1004,
  //       1300000,
  //       1005,
  //       81000
  //     },
  //     costTime = 388800,
  //     exp = 11113,
  //     kingdomPoint = 141120,
  //     power = 37755,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [20] = {
  //     index = 20,
  //     bid = 101,
  //     blv = 20,
  //     kingdomLv = 0,
  //     preCond = {102, 19},
  //     costRes = {
  //       1002,
  //       16000000,
  //       1003,
  //       16000000,
  //       1004,
  //       1600000,
  //       1005,
  //       100000
  //     },
  //     costTime = 442800,
  //     exp = 12656,
  //     kingdomPoint = 164000,
  //     power = 46525,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [21] = {
  //     index = 21,
  //     bid = 101,
  //     blv = 21,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       20,
  //       202,
  //       20
  //     },
  //     costRes = {
  //       1002,
  //       20000000,
  //       1003,
  //       20000000,
  //       1004,
  //       2000000,
  //       1005,
  //       125000
  //     },
  //     costTime = 507600,
  //     exp = 14507,
  //     kingdomPoint = 188000,
  //     power = 56470,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [22] = {
  //     index = 22,
  //     bid = 101,
  //     blv = 22,
  //     kingdomLv = 0,
  //     preCond = {102, 21},
  //     costRes = {
  //       1002,
  //       25000000,
  //       1003,
  //       25000000,
  //       1004,
  //       2500000,
  //       1005,
  //       156000
  //     },
  //     costTime = 583200,
  //     exp = 16667,
  //     kingdomPoint = 216000,
  //     power = 67745,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [23] = {
  //     index = 23,
  //     bid = 101,
  //     blv = 23,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       22,
  //       118,
  //       22,
  //       121,
  //       22
  //     },
  //     costRes = {
  //       1002,
  //       30000000,
  //       1003,
  //       30000000,
  //       1004,
  //       3000000,
  //       1005,
  //       187000
  //     },
  //     costTime = 669600,
  //     exp = 19136,
  //     kingdomPoint = 248000,
  //     power = 80530,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [24] = {
  //     index = 24,
  //     bid = 101,
  //     blv = 24,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       23,
  //       116,
  //       23
  //     },
  //     costRes = {
  //       1002,
  //       40000000,
  //       1003,
  //       40000000,
  //       1004,
  //       4000000,
  //       1005,
  //       250000
  //     },
  //     costTime = 770400,
  //     exp = 22016,
  //     kingdomPoint = 285333,
  //     power = 95035,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [25] = {
  //     index = 25,
  //     bid = 101,
  //     blv = 25,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       24,
  //       113,
  //       24
  //     },
  //     costRes = {
  //       1002,
  //       55000000,
  //       1003,
  //       55000000,
  //       1004,
  //       5500000,
  //       1005,
  //       343000
  //     },
  //     costTime = 885600,
  //     exp = 25307,
  //     kingdomPoint = 328000,
  //     power = 111475,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [26] = {
  //     index = 26,
  //     bid = 101,
  //     blv = 26,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       25,
  //       111,
  //       25
  //     },
  //     costRes = {
  //       1002,
  //       75000000,
  //       1003,
  //       75000000,
  //       1004,
  //       7500000,
  //       1005,
  //       468000
  //     },
  //     costTime = 1015200,
  //     exp = 29010,
  //     kingdomPoint = 376000,
  //     power = 130125,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [27] = {
  //     index = 27,
  //     bid = 101,
  //     blv = 27,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       26,
  //       114,
  //       26
  //     },
  //     costRes = {
  //       1002,
  //       100000000,
  //       1003,
  //       100000000,
  //       1004,
  //       10000000,
  //       1005,
  //       625000
  //     },
  //     costTime = 1159200,
  //     exp = 33125,
  //     kingdomPoint = 429333,
  //     power = 151270,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [28] = {
  //     index = 28,
  //     bid = 101,
  //     blv = 28,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       27,
  //       118,
  //       27,
  //       121,
  //       27
  //     },
  //     costRes = {
  //       1002,
  //       130000000,
  //       1003,
  //       130000000,
  //       1004,
  //       13000000,
  //       1005,
  //       812000
  //     },
  //     costTime = 1317600,
  //     exp = 37650,
  //     kingdomPoint = 488000,
  //     power = 175250,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [29] = {
  //     index = 29,
  //     bid = 101,
  //     blv = 29,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       28,
  //       119,
  //       28
  //     },
  //     costRes = {
  //       1002,
  //       170000000,
  //       1003,
  //       170000000,
  //       1004,
  //       17000000,
  //       1005,
  //       1062000
  //     },
  //     costTime = 1490400,
  //     exp = 42587,
  //     kingdomPoint = 552000,
  //     power = 202440,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [30] = {
  //     index = 30,
  //     bid = 101,
  //     blv = 30,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       29,
  //       117,
  //       29
  //     },
  //     costRes = {
  //       1002,
  //       220000000,
  //       1003,
  //       220000000,
  //       1004,
  //       22000000,
  //       1005,
  //       1375000
  //     },
  //     costTime = 1706400,
  //     exp = 48759,
  //     kingdomPoint = 632000,
  //     power = 233280,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {}
  //   },
  //   [31] = {
  //     index = 31,
  //     bid = 101,
  //     blv = 31,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       15000000,
  //       1003,
  //       15000000,
  //       1004,
  //       1500000,
  //       1005,
  //       750000
  //     },
  //     costTime = 144000,
  //     exp = 4805,
  //     kingdomPoint = 53333,
  //     power = 237282,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 10}
  //   },
  //   [32] = {
  //     index = 32,
  //     bid = 101,
  //     blv = 32,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       15500000,
  //       1003,
  //       15500000,
  //       1004,
  //       1550000,
  //       1005,
  //       775000
  //     },
  //     costTime = 154800,
  //     exp = 5165,
  //     kingdomPoint = 57333,
  //     power = 241284,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 20}
  //   },
  //   [33] = {
  //     index = 33,
  //     bid = 101,
  //     blv = 33,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       16000000,
  //       1003,
  //       16000000,
  //       1004,
  //       1600000,
  //       1005,
  //       800000
  //     },
  //     costTime = 165600,
  //     exp = 5525,
  //     kingdomPoint = 61333,
  //     power = 245286,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 30}
  //   },
  //   [34] = {
  //     index = 34,
  //     bid = 101,
  //     blv = 34,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       16500000,
  //       1003,
  //       16500000,
  //       1004,
  //       1650000,
  //       1005,
  //       825000
  //     },
  //     costTime = 176400,
  //     exp = 5885,
  //     kingdomPoint = 65333,
  //     power = 249288,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 40}
  //   },
  //   [35] = {
  //     index = 35,
  //     bid = 101,
  //     blv = 35,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       17000000,
  //       1003,
  //       17000000,
  //       1004,
  //       1700000,
  //       1005,
  //       850000
  //     },
  //     costTime = 187200,
  //     exp = 6245,
  //     kingdomPoint = 69333,
  //     power = 253290,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 50}
  //   },
  //   [36] = {
  //     index = 36,
  //     bid = 101,
  //     blv = 36,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       17500000,
  //       1003,
  //       17500000,
  //       1004,
  //       1750000,
  //       1005,
  //       875000
  //     },
  //     costTime = 198000,
  //     exp = 6605,
  //     kingdomPoint = 73333,
  //     power = 257292,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 60}
  //   },
  //   [37] = {
  //     index = 37,
  //     bid = 101,
  //     blv = 37,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       18000000,
  //       1003,
  //       18000000,
  //       1004,
  //       1800000,
  //       1005,
  //       900000
  //     },
  //     costTime = 208800,
  //     exp = 6965,
  //     kingdomPoint = 77333,
  //     power = 261294,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 70}
  //   },
  //   [38] = {
  //     index = 38,
  //     bid = 101,
  //     blv = 38,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       18500000,
  //       1003,
  //       18500000,
  //       1004,
  //       1850000,
  //       1005,
  //       925000
  //     },
  //     costTime = 219600,
  //     exp = 7325,
  //     kingdomPoint = 81333,
  //     power = 265296,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 80}
  //   },
  //   [39] = {
  //     index = 39,
  //     bid = 101,
  //     blv = 39,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       19000000,
  //       1003,
  //       19000000,
  //       1004,
  //       1900000,
  //       1005,
  //       950000
  //     },
  //     costTime = 230400,
  //     exp = 7685,
  //     kingdomPoint = 85333,
  //     power = 269298,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 90}
  //   },
  //   [40] = {
  //     index = 40,
  //     bid = 101,
  //     blv = 40,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       30,
  //       301,
  //       30
  //     },
  //     costRes = {
  //       1002,
  //       19500000,
  //       1003,
  //       19500000,
  //       1004,
  //       1950000,
  //       1005,
  //       975000
  //     },
  //     costTime = 241200,
  //     exp = 8045,
  //     kingdomPoint = 89333,
  //     power = 273300,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 100}
  //   },
  //   [41] = {
  //     index = 41,
  //     bid = 101,
  //     blv = 41,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       20000000,
  //       1003,
  //       20000000,
  //       1004,
  //       2000000,
  //       1005,
  //       1000000
  //     },
  //     costTime = 252000,
  //     exp = 8405,
  //     kingdomPoint = 93333,
  //     power = 280370,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 100}
  //   },
  //   [42] = {
  //     index = 42,
  //     bid = 101,
  //     blv = 42,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       20500000,
  //       1003,
  //       20500000,
  //       1004,
  //       2050000,
  //       1005,
  //       1025000
  //     },
  //     costTime = 262800,
  //     exp = 8765,
  //     kingdomPoint = 97333,
  //     power = 287440,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 120}
  //   },
  //   [43] = {
  //     index = 43,
  //     bid = 101,
  //     blv = 43,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       21000000,
  //       1003,
  //       21000000,
  //       1004,
  //       2100000,
  //       1005,
  //       1050000
  //     },
  //     costTime = 273600,
  //     exp = 9125,
  //     kingdomPoint = 101333,
  //     power = 294510,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 140}
  //   },
  //   [44] = {
  //     index = 44,
  //     bid = 101,
  //     blv = 44,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       21500000,
  //       1003,
  //       21500000,
  //       1004,
  //       2150000,
  //       1005,
  //       1075000
  //     },
  //     costTime = 284400,
  //     exp = 9485,
  //     kingdomPoint = 105333,
  //     power = 301580,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 160}
  //   },
  //   [45] = {
  //     index = 45,
  //     bid = 101,
  //     blv = 45,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       22000000,
  //       1003,
  //       22000000,
  //       1004,
  //       2200000,
  //       1005,
  //       1100000
  //     },
  //     costTime = 295200,
  //     exp = 9845,
  //     kingdomPoint = 109333,
  //     power = 308650,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 180}
  //   },
  //   [46] = {
  //     index = 46,
  //     bid = 101,
  //     blv = 46,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       22500000,
  //       1003,
  //       22500000,
  //       1004,
  //       2250000,
  //       1005,
  //       1125000
  //     },
  //     costTime = 306000,
  //     exp = 10205,
  //     kingdomPoint = 113333,
  //     power = 315720,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 200}
  //   },
  //   [47] = {
  //     index = 47,
  //     bid = 101,
  //     blv = 47,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       23000000,
  //       1003,
  //       23000000,
  //       1004,
  //       2300000,
  //       1005,
  //       1150000
  //     },
  //     costTime = 316800,
  //     exp = 10565,
  //     kingdomPoint = 117333,
  //     power = 322790,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 220}
  //   },
  //   [48] = {
  //     index = 48,
  //     bid = 101,
  //     blv = 48,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       23500000,
  //       1003,
  //       23500000,
  //       1004,
  //       2350000,
  //       1005,
  //       1175000
  //     },
  //     costTime = 327600,
  //     exp = 10925,
  //     kingdomPoint = 121333,
  //     power = 329860,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 240}
  //   },
  //   [49] = {
  //     index = 49,
  //     bid = 101,
  //     blv = 49,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       24000000,
  //       1003,
  //       24000000,
  //       1004,
  //       2400000,
  //       1005,
  //       1200000
  //     },
  //     costTime = 338400,
  //     exp = 11285,
  //     kingdomPoint = 125333,
  //     power = 336930,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 260}
  //   },
  //   [50] = {
  //     index = 50,
  //     bid = 101,
  //     blv = 50,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       40,
  //       301,
  //       40
  //     },
  //     costRes = {
  //       1002,
  //       24500000,
  //       1003,
  //       24500000,
  //       1004,
  //       2450000,
  //       1005,
  //       1225000
  //     },
  //     costTime = 349200,
  //     exp = 11645,
  //     kingdomPoint = 129333,
  //     power = 344000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 280}
  //   },
  //   [51] = {
  //     index = 51,
  //     bid = 101,
  //     blv = 51,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       25000000,
  //       1003,
  //       25000000,
  //       1004,
  //       2500000,
  //       1005,
  //       1250000
  //     },
  //     costTime = 360000,
  //     exp = 12005,
  //     kingdomPoint = 133333,
  //     power = 354080,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 310}
  //   },
  //   [52] = {
  //     index = 52,
  //     bid = 101,
  //     blv = 52,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       25500000,
  //       1003,
  //       25500000,
  //       1004,
  //       2550000,
  //       1005,
  //       1275000
  //     },
  //     costTime = 370800,
  //     exp = 12365,
  //     kingdomPoint = 137333,
  //     power = 364160,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 340}
  //   },
  //   [53] = {
  //     index = 53,
  //     bid = 101,
  //     blv = 53,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       26000000,
  //       1003,
  //       26000000,
  //       1004,
  //       2600000,
  //       1005,
  //       1300000
  //     },
  //     costTime = 381600,
  //     exp = 12725,
  //     kingdomPoint = 141333,
  //     power = 374240,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 370}
  //   },
  //   [54] = {
  //     index = 54,
  //     bid = 101,
  //     blv = 54,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       26500000,
  //       1003,
  //       26500000,
  //       1004,
  //       2650000,
  //       1005,
  //       1325000
  //     },
  //     costTime = 392400,
  //     exp = 13085,
  //     kingdomPoint = 145333,
  //     power = 384320,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 400}
  //   },
  //   [55] = {
  //     index = 55,
  //     bid = 101,
  //     blv = 55,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       27000000,
  //       1003,
  //       27000000,
  //       1004,
  //       2700000,
  //       1005,
  //       1350000
  //     },
  //     costTime = 403200,
  //     exp = 13445,
  //     kingdomPoint = 149333,
  //     power = 394400,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 430}
  //   },
  //   [56] = {
  //     index = 56,
  //     bid = 101,
  //     blv = 56,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       27500000,
  //       1003,
  //       27500000,
  //       1004,
  //       2750000,
  //       1005,
  //       1375000
  //     },
  //     costTime = 414000,
  //     exp = 13805,
  //     kingdomPoint = 153333,
  //     power = 404480,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 460}
  //   },
  //   [57] = {
  //     index = 57,
  //     bid = 101,
  //     blv = 57,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       28000000,
  //       1003,
  //       28000000,
  //       1004,
  //       2800000,
  //       1005,
  //       1400000
  //     },
  //     costTime = 424800,
  //     exp = 14165,
  //     kingdomPoint = 157333,
  //     power = 414560,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 490}
  //   },
  //   [58] = {
  //     index = 58,
  //     bid = 101,
  //     blv = 58,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       28500000,
  //       1003,
  //       28500000,
  //       1004,
  //       2850000,
  //       1005,
  //       1425000
  //     },
  //     costTime = 435600,
  //     exp = 14525,
  //     kingdomPoint = 161333,
  //     power = 424640,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 520}
  //   },
  //   [59] = {
  //     index = 59,
  //     bid = 101,
  //     blv = 59,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       29000000,
  //       1003,
  //       29000000,
  //       1004,
  //       2900000,
  //       1005,
  //       1450000
  //     },
  //     costTime = 446400,
  //     exp = 14885,
  //     kingdomPoint = 165333,
  //     power = 434720,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 550}
  //   },
  //   [60] = {
  //     index = 60,
  //     bid = 101,
  //     blv = 60,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       50,
  //       301,
  //       50
  //     },
  //     costRes = {
  //       1002,
  //       29500000,
  //       1003,
  //       29500000,
  //       1004,
  //       2950000,
  //       1005,
  //       1475000
  //     },
  //     costTime = 457200,
  //     exp = 15245,
  //     kingdomPoint = 169333,
  //     power = 444800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 580}
  //   },
  //   [61] = {
  //     index = 61,
  //     bid = 101,
  //     blv = 61,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       30000000,
  //       1003,
  //       30000000,
  //       1004,
  //       3000000,
  //       1005,
  //       1500000
  //     },
  //     costTime = 468000,
  //     exp = 15605,
  //     kingdomPoint = 173333,
  //     power = 457800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 600}
  //   },
  //   [62] = {
  //     index = 62,
  //     bid = 101,
  //     blv = 62,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       30500000,
  //       1003,
  //       30500000,
  //       1004,
  //       3050000,
  //       1005,
  //       1525000
  //     },
  //     costTime = 478800,
  //     exp = 15965,
  //     kingdomPoint = 177333,
  //     power = 470800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 650}
  //   },
  //   [63] = {
  //     index = 63,
  //     bid = 101,
  //     blv = 63,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       31000000,
  //       1003,
  //       31000000,
  //       1004,
  //       3100000,
  //       1005,
  //       1550000
  //     },
  //     costTime = 489600,
  //     exp = 16325,
  //     kingdomPoint = 181333,
  //     power = 483800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 700}
  //   },
  //   [64] = {
  //     index = 64,
  //     bid = 101,
  //     blv = 64,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       31500000,
  //       1003,
  //       31500000,
  //       1004,
  //       3150000,
  //       1005,
  //       1575000
  //     },
  //     costTime = 500400,
  //     exp = 16685,
  //     kingdomPoint = 185333,
  //     power = 496800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 750}
  //   },
  //   [65] = {
  //     index = 65,
  //     bid = 101,
  //     blv = 65,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       32000000,
  //       1003,
  //       32000000,
  //       1004,
  //       3200000,
  //       1005,
  //       1600000
  //     },
  //     costTime = 511200,
  //     exp = 17045,
  //     kingdomPoint = 189333,
  //     power = 509800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 800}
  //   },
  //   [66] = {
  //     index = 66,
  //     bid = 101,
  //     blv = 66,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       32500000,
  //       1003,
  //       32500000,
  //       1004,
  //       3250000,
  //       1005,
  //       1625000
  //     },
  //     costTime = 522000,
  //     exp = 17405,
  //     kingdomPoint = 193333,
  //     power = 522800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 850}
  //   },
  //   [67] = {
  //     index = 67,
  //     bid = 101,
  //     blv = 67,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       33000000,
  //       1003,
  //       33000000,
  //       1004,
  //       3300000,
  //       1005,
  //       1650000
  //     },
  //     costTime = 532800,
  //     exp = 17765,
  //     kingdomPoint = 197333,
  //     power = 535800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 900}
  //   },
  //   [68] = {
  //     index = 68,
  //     bid = 101,
  //     blv = 68,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       33500000,
  //       1003,
  //       33500000,
  //       1004,
  //       3350000,
  //       1005,
  //       1675000
  //     },
  //     costTime = 543600,
  //     exp = 18125,
  //     kingdomPoint = 201333,
  //     power = 548800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 950}
  //   },
  //   [69] = {
  //     index = 69,
  //     bid = 101,
  //     blv = 69,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       34000000,
  //       1003,
  //       34000000,
  //       1004,
  //       3400000,
  //       1005,
  //       1700000
  //     },
  //     costTime = 554400,
  //     exp = 18485,
  //     kingdomPoint = 205333,
  //     power = 561800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1000}
  //   },
  //   [70] = {
  //     index = 70,
  //     bid = 101,
  //     blv = 70,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       60,
  //       301,
  //       60
  //     },
  //     costRes = {
  //       1002,
  //       34500000,
  //       1003,
  //       34500000,
  //       1004,
  //       3450000,
  //       1005,
  //       1725000
  //     },
  //     costTime = 565200,
  //     exp = 18845,
  //     kingdomPoint = 209333,
  //     power = 574800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1050}
  //   },
  //   [71] = {
  //     index = 71,
  //     bid = 101,
  //     blv = 71,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       35000000,
  //       1003,
  //       35000000,
  //       1004,
  //       3500000,
  //       1005,
  //       1750000
  //     },
  //     costTime = 576000,
  //     exp = 19205,
  //     kingdomPoint = 213333,
  //     power = 590780,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1200}
  //   },
  //   [72] = {
  //     index = 72,
  //     bid = 101,
  //     blv = 72,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       35500000,
  //       1003,
  //       35500000,
  //       1004,
  //       3550000,
  //       1005,
  //       1775000
  //     },
  //     costTime = 586800,
  //     exp = 19565,
  //     kingdomPoint = 217333,
  //     power = 606760,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1300}
  //   },
  //   [73] = {
  //     index = 73,
  //     bid = 101,
  //     blv = 73,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       36000000,
  //       1003,
  //       36000000,
  //       1004,
  //       3600000,
  //       1005,
  //       1800000
  //     },
  //     costTime = 597600,
  //     exp = 19925,
  //     kingdomPoint = 221333,
  //     power = 622740,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1400}
  //   },
  //   [74] = {
  //     index = 74,
  //     bid = 101,
  //     blv = 74,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       36500000,
  //       1003,
  //       36500000,
  //       1004,
  //       3650000,
  //       1005,
  //       1825000
  //     },
  //     costTime = 608400,
  //     exp = 20285,
  //     kingdomPoint = 225333,
  //     power = 638720,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1500}
  //   },
  //   [75] = {
  //     index = 75,
  //     bid = 101,
  //     blv = 75,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       37000000,
  //       1003,
  //       37000000,
  //       1004,
  //       3700000,
  //       1005,
  //       1850000
  //     },
  //     costTime = 619200,
  //     exp = 20645,
  //     kingdomPoint = 229333,
  //     power = 654700,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1600}
  //   },
  //   [76] = {
  //     index = 76,
  //     bid = 101,
  //     blv = 76,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       37500000,
  //       1003,
  //       37500000,
  //       1004,
  //       3750000,
  //       1005,
  //       1875000
  //     },
  //     costTime = 630000,
  //     exp = 21005,
  //     kingdomPoint = 233333,
  //     power = 670680,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1700}
  //   },
  //   [77] = {
  //     index = 77,
  //     bid = 101,
  //     blv = 77,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       38000000,
  //       1003,
  //       38000000,
  //       1004,
  //       3800000,
  //       1005,
  //       1900000
  //     },
  //     costTime = 640800,
  //     exp = 21365,
  //     kingdomPoint = 237333,
  //     power = 686660,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1800}
  //   },
  //   [78] = {
  //     index = 78,
  //     bid = 101,
  //     blv = 78,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       38500000,
  //       1003,
  //       38500000,
  //       1004,
  //       3850000,
  //       1005,
  //       1925000
  //     },
  //     costTime = 651600,
  //     exp = 21725,
  //     kingdomPoint = 241333,
  //     power = 702640,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 1900}
  //   },
  //   [79] = {
  //     index = 79,
  //     bid = 101,
  //     blv = 79,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       39000000,
  //       1003,
  //       39000000,
  //       1004,
  //       3900000,
  //       1005,
  //       1950000
  //     },
  //     costTime = 662400,
  //     exp = 22085,
  //     kingdomPoint = 245333,
  //     power = 718620,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 2000}
  //   },
  //   [80] = {
  //     index = 80,
  //     bid = 101,
  //     blv = 80,
  //     kingdomLv = 0,
  //     preCond = {
  //       102,
  //       70,
  //       301,
  //       70
  //     },
  //     costRes = {
  //       1002,
  //       39000000,
  //       1003,
  //       39000000,
  //       1004,
  //       3900000,
  //       1005,
  //       1950000
  //     },
  //     costTime = 673200,
  //     exp = 22445,
  //     kingdomPoint = 249333,
  //     power = 734600,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301101, 2100}
  //   },
  //   [81] = {
  //     index = 81,
  //     bid = 101,
  //     blv = 81,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       40000000,
  //       1003,
  //       40000000,
  //       1004,
  //       4000000,
  //       1005,
  //       2000000,
  //       1027,
  //       10000
  //     },
  //     costTime = 684000,
  //     exp = 22805,
  //     kingdomPoint = 253333,
  //     power = 752640,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 250}
  //   },
  //   [82] = {
  //     index = 82,
  //     bid = 101,
  //     blv = 82,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       41000000,
  //       1003,
  //       41000000,
  //       1004,
  //       4050000,
  //       1005,
  //       2025000,
  //       1027,
  //       30000
  //     },
  //     costTime = 694800,
  //     exp = 23165,
  //     kingdomPoint = 257333,
  //     power = 770680,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 300}
  //   },
  //   [83] = {
  //     index = 83,
  //     bid = 101,
  //     blv = 83,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       42000000,
  //       1003,
  //       42000000,
  //       1004,
  //       4100000,
  //       1005,
  //       2050000,
  //       1027,
  //       50000
  //     },
  //     costTime = 705600,
  //     exp = 23525,
  //     kingdomPoint = 261333,
  //     power = 788720,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 350}
  //   },
  //   [84] = {
  //     index = 84,
  //     bid = 101,
  //     blv = 84,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       43000000,
  //       1003,
  //       43000000,
  //       1004,
  //       4150000,
  //       1005,
  //       2075000,
  //       1027,
  //       70000
  //     },
  //     costTime = 716400,
  //     exp = 23885,
  //     kingdomPoint = 265333,
  //     power = 806760,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 400}
  //   },
  //   [85] = {
  //     index = 85,
  //     bid = 101,
  //     blv = 85,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       44000000,
  //       1003,
  //       44000000,
  //       1004,
  //       4200000,
  //       1005,
  //       2100000,
  //       1027,
  //       90000
  //     },
  //     costTime = 727200,
  //     exp = 24245,
  //     kingdomPoint = 269333,
  //     power = 824800,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 450}
  //   },
  //   [86] = {
  //     index = 86,
  //     bid = 101,
  //     blv = 86,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       45000000,
  //       1003,
  //       45000000,
  //       1004,
  //       4250000,
  //       1005,
  //       2125000,
  //       1027,
  //       115000
  //     },
  //     costTime = 738000,
  //     exp = 24605,
  //     kingdomPoint = 273333,
  //     power = 842840,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 500}
  //   },
  //   [87] = {
  //     index = 87,
  //     bid = 101,
  //     blv = 87,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       46000000,
  //       1003,
  //       46000000,
  //       1004,
  //       4300000,
  //       1005,
  //       2150000,
  //       1027,
  //       135000
  //     },
  //     costTime = 748800,
  //     exp = 24965,
  //     kingdomPoint = 277333,
  //     power = 860880,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 550}
  //   },
  //   [88] = {
  //     index = 88,
  //     bid = 101,
  //     blv = 88,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       47000000,
  //       1003,
  //       47000000,
  //       1004,
  //       4350000,
  //       1005,
  //       2175000,
  //       1027,
  //       155000
  //     },
  //     costTime = 759600,
  //     exp = 25325,
  //     kingdomPoint = 281333,
  //     power = 878920,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 600}
  //   },
  //   [89] = {
  //     index = 89,
  //     bid = 101,
  //     blv = 89,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       48000000,
  //       1003,
  //       48000000,
  //       1004,
  //       4400000,
  //       1005,
  //       2200000,
  //       1027,
  //       180000
  //     },
  //     costTime = 770400,
  //     exp = 25685,
  //     kingdomPoint = 285333,
  //     power = 896960,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 650}
  //   },
  //   [90] = {
  //     index = 90,
  //     bid = 101,
  //     blv = 90,
  //     kingdomLv = 10,
  //     preCond = {
  //       102,
  //       80,
  //       301,
  //       80
  //     },
  //     costRes = {
  //       1002,
  //       49000000,
  //       1003,
  //       49000000,
  //       1004,
  //       4450000,
  //       1005,
  //       2225000,
  //       1027,
  //       200000
  //     },
  //     costTime = 781200,
  //     exp = 26045,
  //     kingdomPoint = 289333,
  //     power = 915000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 700}
  //   },
  //   [91] = {
  //     index = 91,
  //     bid = 101,
  //     blv = 91,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       50000000,
  //       1003,
  //       50000000,
  //       1004,
  //       4500000,
  //       1005,
  //       2250000,
  //       1027,
  //       225000
  //     },
  //     costTime = 792000,
  //     exp = 26405,
  //     kingdomPoint = 293333,
  //     power = 933500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 780}
  //   },
  //   [92] = {
  //     index = 92,
  //     bid = 101,
  //     blv = 92,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       51000000,
  //       1003,
  //       51000000,
  //       1004,
  //       4550000,
  //       1005,
  //       2275000,
  //       1027,
  //       250000
  //     },
  //     costTime = 802800,
  //     exp = 26765,
  //     kingdomPoint = 297333,
  //     power = 952000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 860}
  //   },
  //   [93] = {
  //     index = 93,
  //     bid = 101,
  //     blv = 93,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       52000000,
  //       1003,
  //       52000000,
  //       1004,
  //       4600000,
  //       1005,
  //       2300000,
  //       1027,
  //       275000
  //     },
  //     costTime = 813600,
  //     exp = 27125,
  //     kingdomPoint = 301333,
  //     power = 970500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 940}
  //   },
  //   [94] = {
  //     index = 94,
  //     bid = 101,
  //     blv = 94,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       53000000,
  //       1003,
  //       53000000,
  //       1004,
  //       4650000,
  //       1005,
  //       2325000,
  //       1027,
  //       300000
  //     },
  //     costTime = 824400,
  //     exp = 27485,
  //     kingdomPoint = 305333,
  //     power = 989000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1020}
  //   },
  //   [95] = {
  //     index = 95,
  //     bid = 101,
  //     blv = 95,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       54000000,
  //       1003,
  //       54000000,
  //       1004,
  //       4700000,
  //       1005,
  //       2350000,
  //       1027,
  //       325000
  //     },
  //     costTime = 835200,
  //     exp = 27845,
  //     kingdomPoint = 309333,
  //     power = 1007500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1100}
  //   },
  //   [96] = {
  //     index = 96,
  //     bid = 101,
  //     blv = 96,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       55000000,
  //       1003,
  //       55000000,
  //       1004,
  //       4750000,
  //       1005,
  //       2375000,
  //       1027,
  //       350000
  //     },
  //     costTime = 846000,
  //     exp = 28205,
  //     kingdomPoint = 313333,
  //     power = 1026000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1180}
  //   },
  //   [97] = {
  //     index = 97,
  //     bid = 101,
  //     blv = 97,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       56000000,
  //       1003,
  //       56000000,
  //       1004,
  //       4800000,
  //       1005,
  //       2400000,
  //       1027,
  //       375000
  //     },
  //     costTime = 856800,
  //     exp = 28565,
  //     kingdomPoint = 317333,
  //     power = 1044500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1260}
  //   },
  //   [98] = {
  //     index = 98,
  //     bid = 101,
  //     blv = 98,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       57000000,
  //       1003,
  //       57000000,
  //       1004,
  //       4850000,
  //       1005,
  //       2425000,
  //       1027,
  //       400000
  //     },
  //     costTime = 867600,
  //     exp = 28925,
  //     kingdomPoint = 321333,
  //     power = 1063000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1340}
  //   },
  //   [99] = {
  //     index = 99,
  //     bid = 101,
  //     blv = 99,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       58000000,
  //       1003,
  //       58000000,
  //       1004,
  //       4900000,
  //       1005,
  //       2450000,
  //       1027,
  //       430000
  //     },
  //     costTime = 878400,
  //     exp = 29285,
  //     kingdomPoint = 325333,
  //     power = 1081500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1420}
  //   },
  //   [100] = {
  //     index = 100,
  //     bid = 101,
  //     blv = 100,
  //     kingdomLv = 20,
  //     preCond = {
  //       102,
  //       90,
  //       301,
  //       90
  //     },
  //     costRes = {
  //       1002,
  //       59000000,
  //       1003,
  //       59000000,
  //       1004,
  //       4950000,
  //       1005,
  //       2475000,
  //       1027,
  //       455000
  //     },
  //     costTime = 889200,
  //     exp = 29645,
  //     kingdomPoint = 329333,
  //     power = 1100000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1500}
  //   },
  //   [101] = {
  //     index = 101,
  //     bid = 101,
  //     blv = 101,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       60000000,
  //       1003,
  //       60000000,
  //       1004,
  //       5000000,
  //       1005,
  //       2500000,
  //       1027,
  //       485000
  //     },
  //     costTime = 900000,
  //     exp = 30005,
  //     kingdomPoint = 333333,
  //     power = 1120500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1600}
  //   },
  //   [102] = {
  //     index = 102,
  //     bid = 101,
  //     blv = 102,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       61000000,
  //       1003,
  //       61000000,
  //       1004,
  //       5050000,
  //       1005,
  //       2525000,
  //       1027,
  //       515000
  //     },
  //     costTime = 910800,
  //     exp = 30365,
  //     kingdomPoint = 337333,
  //     power = 1141000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1700}
  //   },
  //   [103] = {
  //     index = 103,
  //     bid = 101,
  //     blv = 103,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       62000000,
  //       1003,
  //       62000000,
  //       1004,
  //       5100000,
  //       1005,
  //       2550000,
  //       1027,
  //       540000
  //     },
  //     costTime = 921600,
  //     exp = 30725,
  //     kingdomPoint = 341333,
  //     power = 1161500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1800}
  //   },
  //   [104] = {
  //     index = 104,
  //     bid = 101,
  //     blv = 104,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       63000000,
  //       1003,
  //       63000000,
  //       1004,
  //       5150000,
  //       1005,
  //       2575000,
  //       1027,
  //       570000
  //     },
  //     costTime = 932400,
  //     exp = 31085,
  //     kingdomPoint = 345333,
  //     power = 1182000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 1900}
  //   },
  //   [105] = {
  //     index = 105,
  //     bid = 101,
  //     blv = 105,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       64000000,
  //       1003,
  //       64000000,
  //       1004,
  //       5200000,
  //       1005,
  //       2600000,
  //       1027,
  //       600000
  //     },
  //     costTime = 943200,
  //     exp = 31445,
  //     kingdomPoint = 349333,
  //     power = 1202500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2000}
  //   },
  //   [106] = {
  //     index = 106,
  //     bid = 101,
  //     blv = 106,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       65000000,
  //       1003,
  //       65000000,
  //       1004,
  //       5250000,
  //       1005,
  //       2625000,
  //       1027,
  //       630000
  //     },
  //     costTime = 954000,
  //     exp = 31805,
  //     kingdomPoint = 353333,
  //     power = 1223000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2100}
  //   },
  //   [107] = {
  //     index = 107,
  //     bid = 101,
  //     blv = 107,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       66000000,
  //       1003,
  //       66000000,
  //       1004,
  //       5300000,
  //       1005,
  //       2650000,
  //       1027,
  //       665000
  //     },
  //     costTime = 964800,
  //     exp = 32165,
  //     kingdomPoint = 357333,
  //     power = 1243500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2200}
  //   },
  //   [108] = {
  //     index = 108,
  //     bid = 101,
  //     blv = 108,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       67000000,
  //       1003,
  //       67000000,
  //       1004,
  //       5350000,
  //       1005,
  //       2675000,
  //       1027,
  //       695000
  //     },
  //     costTime = 975600,
  //     exp = 32525,
  //     kingdomPoint = 361333,
  //     power = 1264000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2300}
  //   },
  //   [109] = {
  //     index = 109,
  //     bid = 101,
  //     blv = 109,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       68000000,
  //       1003,
  //       68000000,
  //       1004,
  //       5400000,
  //       1005,
  //       2700000,
  //       1027,
  //       725000
  //     },
  //     costTime = 986400,
  //     exp = 32885,
  //     kingdomPoint = 365333,
  //     power = 1284500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2400}
  //   },
  //   [110] = {
  //     index = 110,
  //     bid = 101,
  //     blv = 110,
  //     kingdomLv = 30,
  //     preCond = {
  //       102,
  //       100,
  //       301,
  //       100
  //     },
  //     costRes = {
  //       1002,
  //       69000000,
  //       1003,
  //       69000000,
  //       1004,
  //       5450000,
  //       1005,
  //       2725000,
  //       1027,
  //       760000
  //     },
  //     costTime = 997200,
  //     exp = 33245,
  //     kingdomPoint = 369333,
  //     power = 1305000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2500}
  //   },
  //   [111] = {
  //     index = 111,
  //     bid = 101,
  //     blv = 111,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       70000000,
  //       1003,
  //       70000000,
  //       1004,
  //       5500000,
  //       1005,
  //       2750000,
  //       1027,
  //       790000
  //     },
  //     costTime = 1008000,
  //     exp = 33605,
  //     kingdomPoint = 373333,
  //     power = 1327500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2620}
  //   },
  //   [112] = {
  //     index = 112,
  //     bid = 101,
  //     blv = 112,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       71000000,
  //       1003,
  //       71000000,
  //       1004,
  //       5550000,
  //       1005,
  //       2775000,
  //       1027,
  //       825000
  //     },
  //     costTime = 1018800,
  //     exp = 33965,
  //     kingdomPoint = 377333,
  //     power = 1350000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2740}
  //   },
  //   [113] = {
  //     index = 113,
  //     bid = 101,
  //     blv = 113,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       72000000,
  //       1003,
  //       72000000,
  //       1004,
  //       5600000,
  //       1005,
  //       2800000,
  //       1027,
  //       855000
  //     },
  //     costTime = 1029600,
  //     exp = 34325,
  //     kingdomPoint = 381333,
  //     power = 1372500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2860}
  //   },
  //   [114] = {
  //     index = 114,
  //     bid = 101,
  //     blv = 114,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       73000000,
  //       1003,
  //       73000000,
  //       1004,
  //       5650000,
  //       1005,
  //       2825000,
  //       1027,
  //       890000
  //     },
  //     costTime = 1040400,
  //     exp = 34685,
  //     kingdomPoint = 385333,
  //     power = 1395000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 2980}
  //   },
  //   [115] = {
  //     index = 115,
  //     bid = 101,
  //     blv = 115,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       74000000,
  //       1003,
  //       74000000,
  //       1004,
  //       5700000,
  //       1005,
  //       2850000,
  //       1027,
  //       925000
  //     },
  //     costTime = 1051200,
  //     exp = 35045,
  //     kingdomPoint = 389333,
  //     power = 1417500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3100}
  //   },
  //   [116] = {
  //     index = 116,
  //     bid = 101,
  //     blv = 116,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       75000000,
  //       1003,
  //       75000000,
  //       1004,
  //       5750000,
  //       1005,
  //       2875000,
  //       1027,
  //       960000
  //     },
  //     costTime = 1062000,
  //     exp = 35405,
  //     kingdomPoint = 393333,
  //     power = 1440000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3220}
  //   },
  //   [117] = {
  //     index = 117,
  //     bid = 101,
  //     blv = 117,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       76000000,
  //       1003,
  //       76000000,
  //       1004,
  //       5800000,
  //       1005,
  //       2900000,
  //       1027,
  //       995000
  //     },
  //     costTime = 1072800,
  //     exp = 35765,
  //     kingdomPoint = 397333,
  //     power = 1462500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3340}
  //   },
  //   [118] = {
  //     index = 118,
  //     bid = 101,
  //     blv = 118,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       77000000,
  //       1003,
  //       77000000,
  //       1004,
  //       5850000,
  //       1005,
  //       2925000,
  //       1027,
  //       1030000
  //     },
  //     costTime = 1083600,
  //     exp = 36125,
  //     kingdomPoint = 401333,
  //     power = 1485000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3460}
  //   },
  //   [119] = {
  //     index = 119,
  //     bid = 101,
  //     blv = 119,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       78000000,
  //       1003,
  //       78000000,
  //       1004,
  //       5900000,
  //       1005,
  //       2950000,
  //       1027,
  //       1070000
  //     },
  //     costTime = 1094400,
  //     exp = 36485,
  //     kingdomPoint = 405333,
  //     power = 1507500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3580}
  //   },
  //   [120] = {
  //     index = 120,
  //     bid = 101,
  //     blv = 120,
  //     kingdomLv = 40,
  //     preCond = {
  //       102,
  //       110,
  //       301,
  //       110
  //     },
  //     costRes = {
  //       1002,
  //       79000000,
  //       1003,
  //       79000000,
  //       1004,
  //       5950000,
  //       1005,
  //       2975000,
  //       1027,
  //       1105000
  //     },
  //     costTime = 1105200,
  //     exp = 36845,
  //     kingdomPoint = 409333,
  //     power = 1530000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3700}
  //   },
  //   [121] = {
  //     index = 121,
  //     bid = 101,
  //     blv = 121,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       80000000,
  //       1003,
  //       80000000,
  //       1004,
  //       6000000,
  //       1005,
  //       3000000,
  //       1027,
  //       1145000
  //     },
  //     costTime = 1116000,
  //     exp = 37205,
  //     kingdomPoint = 413333,
  //     power = 1554500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 3830}
  //   },
  //   [122] = {
  //     index = 122,
  //     bid = 101,
  //     blv = 122,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       81000000,
  //       1003,
  //       81000000,
  //       1004,
  //       6050000,
  //       1005,
  //       3025000,
  //       1027,
  //       1418000
  //     },
  //     costTime = 1354400,
  //     exp = 37565,
  //     kingdomPoint = 417333,
  //     power = 1579000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 4250}
  //   },
  //   [123] = {
  //     index = 123,
  //     bid = 101,
  //     blv = 123,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       82000000,
  //       1003,
  //       82000000,
  //       1004,
  //       6100000,
  //       1005,
  //       3050000,
  //       1027,
  //       1577000
  //     },
  //     costTime = 1470900,
  //     exp = 37925,
  //     kingdomPoint = 421333,
  //     power = 1603500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 4680}
  //   },
  //   [124] = {
  //     index = 124,
  //     bid = 101,
  //     blv = 124,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       83000000,
  //       1003,
  //       83000000,
  //       1004,
  //       6150000,
  //       1005,
  //       3075000,
  //       1027,
  //       1743000
  //     },
  //     costTime = 1588400,
  //     exp = 38285,
  //     kingdomPoint = 425333,
  //     power = 1628000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 5120}
  //   },
  //   [125] = {
  //     index = 125,
  //     bid = 101,
  //     blv = 125,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       84000000,
  //       1003,
  //       84000000,
  //       1004,
  //       6200000,
  //       1005,
  //       3100000,
  //       1027,
  //       1907000
  //     },
  //     costTime = 1707000,
  //     exp = 38645,
  //     kingdomPoint = 429333,
  //     power = 1652500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 5570}
  //   },
  //   [126] = {
  //     index = 126,
  //     bid = 101,
  //     blv = 126,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       85000000,
  //       1003,
  //       85000000,
  //       1004,
  //       6250000,
  //       1005,
  //       3125000,
  //       1027,
  //       2084000
  //     },
  //     costTime = 1826800,
  //     exp = 39005,
  //     kingdomPoint = 433333,
  //     power = 1677000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 6030}
  //   },
  //   [127] = {
  //     index = 127,
  //     bid = 101,
  //     blv = 127,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       86000000,
  //       1003,
  //       86000000,
  //       1004,
  //       6300000,
  //       1005,
  //       3150000,
  //       1027,
  //       2268000
  //     },
  //     costTime = 1947900,
  //     exp = 39365,
  //     kingdomPoint = 437333,
  //     power = 1701500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 6500}
  //   },
  //   [128] = {
  //     index = 128,
  //     bid = 101,
  //     blv = 128,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       87000000,
  //       1003,
  //       87000000,
  //       1004,
  //       6350000,
  //       1005,
  //       3175000,
  //       1027,
  //       2459000
  //     },
  //     costTime = 2070600,
  //     exp = 39725,
  //     kingdomPoint = 441333,
  //     power = 1726000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 6980}
  //   },
  //   [129] = {
  //     index = 129,
  //     bid = 101,
  //     blv = 129,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       88000000,
  //       1003,
  //       88000000,
  //       1004,
  //       6400000,
  //       1005,
  //       3200000,
  //       1027,
  //       2669000
  //     },
  //     costTime = 2197700,
  //     exp = 40085,
  //     kingdomPoint = 445333,
  //     power = 1750500,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 7480}
  //   },
  //   [130] = {
  //     index = 130,
  //     bid = 101,
  //     blv = 130,
  //     kingdomLv = 50,
  //     preCond = {
  //       102,
  //       120,
  //       301,
  //       120
  //     },
  //     costRes = {
  //       1002,
  //       89000000,
  //       1003,
  //       89000000,
  //       1004,
  //       6450000,
  //       1005,
  //       3225000,
  //       1027,
  //       2880000
  //     },
  //     costTime = 2329300,
  //     exp = 40445,
  //     kingdomPoint = 449333,
  //     power = 1775000,
  //     unlockedBuild = 0,
  //     costTools = {},
  //     costWEs = {301901, 8000}
  //   }
}