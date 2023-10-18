#pragma once
#include <QList>
#include <QString>
#include <QHash>
#include "Building.Enum.h"
#include "Module/Resource/Resource.Enum.h"
#include "Module/Player/Item/Item.Type.h"
#include "Module/Player/Science/Science.Enum.h"
#include "Module/City/Army/Army.Enum.h"

struct RBuildingDefault
{
  EBuildingIndex _Index;
  EBuilding _Type;
  int _Lvl = 0;
  EBuildingState _State;
  int _StarLvl;
};

struct RCostBuilding {
  EBuilding TypeReq = EBuilding::None;
  unsigned int lvlReq = 0;
};

struct RBuildingLvlSpecs {
  QList<RCostBuilding> PreCond;
  QList<QPair<EResource, unsigned int>> CostRes;
  QList<RCostItem> CostItems;
  QList<RCostItem> CostWEs;
  struct {
    unsigned int exp;
    unsigned int power;
  } Reword;
  unsigned int _CostTime = 0;
  unsigned int lvl = 0;
  EBuilding BuildingID = EBuilding::None;
  unsigned int kingdomPoint = 0;
  unsigned int atkAdd = 0;
  unsigned int atkSpeedAdd = 0;
  unsigned int baseAtkSpeed = 0;
  unsigned int gunshot = 0;
  EArmy unlockedSoldier;
  unsigned int forgeSpeed = 0;
  unsigned int steelReduce = 0;
  unsigned int kingdomLv = 0;
  EBuilding unlockedBuild = EBuilding::None;
  EScience unlockedTechnology = EScience::None;
  unsigned int capacity = 0;
  unsigned int output = 0;
  unsigned int addOutputCostGold = 0;
  unsigned int maxSoldier = 0;
  unsigned int ElitePointLimit = 0;
  unsigned int helpCount = 0;
  unsigned int reduceTime = 0;
  unsigned int reinforcements = 0;
  unsigned int prisonNum = 0;
  unsigned int attack = 0;
  unsigned int defense = 0;
  unsigned int life = 0;
  unsigned int speed = 0;
  unsigned int speedTime = 0;
  unsigned int heroNum = 0;
  unsigned int trainExpBonus = 0;
  unsigned int buildTime = 0;
  unsigned int baseExp = 0;
  unsigned int taxRate = 0;
  unsigned int trainSpeed = 0;
  QString unlockDescribe = "";
  unsigned int defValue = 0;
  QList<QPair<EResource, unsigned int>> resCapacity;
  EWatchTowerEffect watchTowerEffect = EWatchTowerEffect::None;
  unsigned int freeTime = 0;
};

struct RBuildingSpecs {
  int index = 0;
  EBuilding BuildingID = EBuilding::None;
  unsigned int oldUnlocklevel = 0;
  unsigned int oldShowlevel = 0;
  unsigned int unlocklevel = 0;
  unsigned int showlevel = 0;
  EBuildingPlace bType = EBuildingPlace::Inner;
  bool isDemolish = false;
  bool isExchange = false;
  bool isBuild = false;
  bool isUpgrade = false;
  EBuilding buildingType = EBuilding::None;
  int maxCount = 0;
  int maxLvl = 0;
  int initLvl = 0;
  bool openWl = false;
  bool openStar = false;
  int maxStarLv = 0;
  bool isCanBuild = true;
  unsigned int addmaxstarlv = 0;
  const char *BuildingName = "";
  const char *BuildingIcon = "";
  const char *BuildingBrief = "";
  const char *UpgradeBrief = "";
  const char *Describe = "Describe";
  const char *WarDescribe = "";
  const char *StarDescribe = "";
  QHash<int, RBuildingLvlSpecs> Lvls;
};
