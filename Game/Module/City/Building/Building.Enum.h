#pragma once

enum class EWatchTowerEffect{
  None = 0
};

enum class EBuilding  {
  None = 0,
  Castle = 101,
  Wall = 102,
  ArrowTower = 103,
  WatchTower = 104,
  Depot = 105,
  EventCenter = 106,
  Merchant = 107,
  Port = 108,
  TroopDetails = 109,
  Bulletin = 110,
  Embassy = 111,
  Market = 112,
  Institute = 113,
  TreasurePool = 114,
  Blacksmith = 115,
  Stable = 116,
  TargetRange = 117,
  Barrack = 118,
  ChariotPlant = 119,
  Fortress = 120,
  DrillGrounds = 121,
  HallOfWar = 122,
  TrainHall = 123,
  Prison = 125,
  Farm = 201,
  LumberMill = 202,
  IronMine = 203,
  SilverMine = 204,
  MarchingTent = 205,
  FirstAidTent = 206,
  CrystalMine = 207,
  MaterialWorkShop = 210,
  Miracle = 301,
  ElitePalace = 302,
  Monument = 303,
  StarBraveStatue = 304,
  LeisureHouse = 30001,
  HIP = 30002, // El tager El ageeb
  PetHouse = 30003,
  ResurrectionHall = 30004,
  ServiceCenter = 30005,
  EpicBattle = 30006,
  Mastery = 30008,
  AreaLock_1221 = 1221,
  AreaLock_1222 = 1222,
  AreaLock_1223 = 1223,
  AreaLock_1224 = 1224,
  NEBULA_PALACE
};

enum class ELockedArea{
  AreaLock_1221 = 1221,
  AreaLock_1222 = 1222,
  AreaLock_1223 = 1223,
  AreaLock_1224 = 1224
};

enum class EBuildingIndex { 
  None = 0,
  Castle = 1050,
  Build_1051 = 1051,
  ArrowTowerL = 1052,
  WallGate = 1053,
  ArrowTowerR = 1054,
  WatchTower = 1055,
  Build_1056 = 1056,
  Build_1057 = 1057,
  Build_1058 = 1058,
  Build_1059 = 1059,
  Build_1060 = 1060,
  Build_1061 = 1061,
  Build_1062 = 1062,
  Build_1063 = 1063,
  Build_1064 = 1064,
  BehindArrowTowerR = 1065,
  BehindArrowTowerL = 1066,
  Build_1067 = 1067,
  Build_1100 = 1100,
  Build_1101 = 1101,
  Build_1102 = 1102,
  Build_1103 = 1103,
  Build_1104 = 1104,
  Build_1105 = 1105,
  Build_1106 = 1106,
  Build_1107 = 1107,
  Build_1108 = 1108,
  Build_1109 = 1109,
  Build_1110 = 1110,
  Build_1111 = 1111,
  Build_1112 = 1112,
  Build_1113 = 1113,
  Build_1114 = 1114,
  Build_1115 = 1115,
  Build_1116 = 1116,
  Build_1117 = 1117,
  Build_1118 = 1118,
  Build_1119 = 1119,

  Build_1120 = 1120,
  Build_1121 = 1121,
  Build_1122 = 1122,
  Build_1123 = 1123,
  Build_1124 = 1124,

  Build_1125 = 1125,
  Build_1126 = 1126,
  Build_1127 = 1127,
  Build_1128 = 1128,
  Build_1129 = 1129,

  Build_1130 = 1130,
  Build_1131 = 1131,
  Build_1132 = 1132,
  Build_1133 = 1133,
  Build_1134 = 1134,

  MaterialWorkShop = 1151,
  Crystal = 1152,

  Gangkou = 2000, // خيمة المواد
  Miracle = 1200,
  ElitePalace = 1201,
  MonumentRos = 1202,
  Prison = 1203,
  TrainHall = 1204,
  StarBraveStatue = 1205,
  NebulaHall = 1206,
  Merchant = 20005,
  TroopFlag = 20009,
  LeisureCenter = 30001,
  HuoChuang = 30002,  // daily trade ship
  PetCenter = 30003,
  ResurrectionHall = 30004,
  ServiceCenter = 30005,
  EpicBattle = 30006,
  Monument = 30007,
  Mastery = 30008,
  CommandHall = 30009,
  MagicLamp = 30010,
  LockArea_1 = static_cast<int>(EBuilding::AreaLock_1221),
  LockArea_2 = static_cast<int>(EBuilding::AreaLock_1222),
  LockArea_3 = static_cast<int>(EBuilding::AreaLock_1223),
  LockArea_4 = static_cast<int>(EBuilding::AreaLock_1224)
};



enum class EBuildingState {
  Normal = 0, // Normal
  Building = 1,
  Upgrading = 2,
  Demolishing = 3,
  Training = 4,
  TrapBuilding = 5,
  TREATING = 6,
  Studying = 7,
  Lock = 8,
  ArmorForg = 9,
  Idle,
  Working, 
  Harvesting
};

enum class EBuildingPlace { // inner / outter
  Inner = 0,
  Outer = 1,
  None = 2,
  Fixed = 3
};