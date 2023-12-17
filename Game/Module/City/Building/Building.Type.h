#pragma once
#include <QObject>
#include <QList>
#include <QString>
#include <QHash>
#include <QPoint>
#include <QJsonObject>
#include <QJsonArray>
#include "Building.Enum.h"
#include "Module/Resource/Resource.Type.h"
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
  EBuilding Type = EBuilding::None;
  unsigned int Lvl = 0;
  QJsonObject ToJson(){
    return{
      {"Type", (int)Type},
      {"Lvl", int(Lvl)}
    };
  }
};



Q_DECLARE_METATYPE(RCostBuilding);

struct RBuildingLvlSpecs {
  QList<RCostBuilding> PreCond;
  QList<RCostResource> CostRes;
  QList<RCostItem> CostItems;
  QList<RCostItem> CostWEs;
  struct {
    unsigned int Exp;
    unsigned int Power;
  } Reword;
  unsigned int CostTime = 0;
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
  QList<RCapacityResource> resCapacity;
  EWatchTowerEffect watchTowerEffect = EWatchTowerEffect::None;
  unsigned int freeTime = 0;

  QJsonObject ToJson(){

    QJsonArray lPreCond;
    for(auto lCond : PreCond)
      lPreCond.push_back(lCond.ToJson());
    QJsonArray lCostRes;
    for(auto lRes : CostRes)
      lCostRes.push_back(lRes.ToJson());
    QJsonArray lCostItems;
    for(auto lItem : CostItems)
      lCostItems.push_back(lItem.ToJson());
    QJsonArray lCostWEs;
    for(auto lItem : CostWEs)
      lCostWEs.push_back(lItem.ToJson());
    QJsonArray lCapacityRes;
    for(auto lRes : resCapacity)
      lCapacityRes.push_back(lRes.ToJson());

    QJsonObject lJson;
    lJson["PreCond"] = lPreCond;
    lJson["CostRes"] = lCostRes;
    lJson["CostItems"] = lCostItems;
    lJson["CostWEs"] = lCostWEs;
    lJson["Reword"] = QJsonObject({
      {"Exp", (int) Reword.Exp},
      {"Power", (int) Reword.Power}
    });
    lJson["CostTime"] = (int)CostTime;
    lJson["Lvl"] = (int)lvl;
    lJson["BuildingID"] = (int)BuildingID;
    lJson["kingdomPoint"] = (int)kingdomPoint;
    lJson["atkAdd"] = (int)atkAdd;
    lJson["atkSpeedAdd"] = (int)atkSpeedAdd;
    lJson["baseAtkSpeed"] = (int)baseAtkSpeed;
    lJson["gunshot"] = (int)gunshot;
    lJson["unlockedSoldier"] = (int)unlockedSoldier;
    lJson["forgeSpeed"] = (int)forgeSpeed;
    lJson["steelReduce"] = (int)steelReduce;
    lJson["kingdomLv"] = (int)kingdomLv;
    lJson["unlockedBuild"] = (int)unlockedBuild;
    lJson["unlockedTechnology"] = (int)unlockedTechnology;
    lJson["capacity"] = (int)capacity;
    lJson["output"] = (int)output;
    lJson["addOutputCostGold"] = (int)addOutputCostGold;
    lJson["maxSoldier"] = (int)maxSoldier;
    lJson["ElitePointLimit"] = (int)ElitePointLimit;
    lJson["helpCount"] = (int)helpCount;
    lJson["reduceTime"] = (int)reduceTime;
    lJson["reinforcements"] = (int)reinforcements;
    lJson["prisonNum"] = (int)prisonNum;
    lJson["attack"] = (int)attack;
    lJson["defense"] = (int)defense;
    lJson["life"] = (int)life;
    lJson["speed"] = (int)speed;
    lJson["speedTime"] = (int)speedTime;
    lJson["heroNum"] = (int)heroNum;
    lJson["trainExpBonus"] = (int)trainExpBonus;
    lJson["buildTime"] = (int)buildTime;
    lJson["baseExp"] = (int)baseExp;
    lJson["taxRate"] = (int)taxRate;
    lJson["trainSpeed"] = (int)trainSpeed;
    lJson["unlockDescribe"] = unlockDescribe;
    lJson["defValue"] = (int)defValue;
    lJson["ResourceCapacity"] = lCapacityRes;
    lJson["WatchTowerEffect"] = (int)watchTowerEffect;
    lJson["freeTime"] = (int)freeTime;
    return lJson;
  };
};

Q_DECLARE_METATYPE(RBuildingLvlSpecs);
struct RBuildingTipsBtnListData{
  int bid;
  EBuilding buildingID;
  ECityBuildingState cityBuildingState = ECityBuildingState::None;
  QString BuildingName = "buildDes_name_101";
  QString PicFile;
  QString ImgFile;
  QPoint Offset;
  QPoint OffsetByzantine;
  bool bIsInnerBuilding;
  int bCanBuild; //0, 1, 2
  QList<EBuildingTips> NormalOperateList = {
    EBuildingTips::OpDetails,
    EBuildingTips::OpUpgrade,
    EBuildingTips::OpArena,
    EBuildingTips::OpAllianceBattle
  };
  QList<EBuildingTips> CoolingOperateList;
  QList<EBuildingTips> TrainingOperateList;
  QJsonObject ToJson(){
    QJsonObject lJson;
    lJson["bid"] = bid;
    lJson["buildingID"] = (int)buildingID;
    lJson["cityBuildingState"] = (int)cityBuildingState;
    lJson["BuildingName"] = BuildingName;
    lJson["PicFile"] = PicFile;
    lJson["ImgFile"] = ImgFile;
    lJson["Offset"] = QJsonObject({
      {"x", Offset.x()},
      {"y", Offset.y()}
    });
    lJson["OffsetByzantine"] = QJsonObject({
      {"x", OffsetByzantine.x()},
      {"y", OffsetByzantine.y()}
    });
    lJson["bIsInnerBuilding"] = bIsInnerBuilding;
    lJson["bCanBuild"] = bCanBuild;
    QJsonArray lNormalOperateList;
    for(auto lOp : NormalOperateList)
      lNormalOperateList.push_back((int)lOp);
    lJson["NormalOperateList"] = lNormalOperateList;
    QJsonArray lCoolingOperateList;
    for(auto lOp : CoolingOperateList)
      lCoolingOperateList.push_back((int)lOp);
    lJson["CoolingOperateList"] = lCoolingOperateList;
    QJsonArray lTrainingOperateList;
    for(auto lOp : TrainingOperateList)
      lTrainingOperateList.push_back((int)lOp);
    lJson["TrainingOperateList"] = lTrainingOperateList;
    return lJson;
  };
};

Q_DECLARE_METATYPE(RBuildingTipsBtnListData);
class RBuildingSpecs : public QObject {
  Q_OBJECT
  public:
  explicit RBuildingSpecs(QObject *parent = nullptr) : QObject(parent) {}
  int index = 0;
  EBuilding buildingID = EBuilding::None;
  int oldUnlocklevel = 0;
  int oldShowlevel = 0;
  int unlocklevel = 0;
  int showlevel = 0;
  EBuildingPlace bType = EBuildingPlace::Inner;
  bool isDemolish = false;
  bool isExchange = false;
  bool isBuild = false;
  bool isUpgrade = false;
  int maxCount = 0;
  int maxLvl = 0;
  int initLvl = 0;
  bool openWl = false;
  bool openStar = false;
  int maxStarLv = 0;
  int isCanBuild = 1;
  unsigned int addmaxstarlv = 0;
  const char *BuildingName = "";
  const char *BuildingIcon = "";
  const char *BuildingBrief = "";
  const char *UpgradeBrief = "";
  const char *Describe = "Describe";
  const char *WarDescribe = "";
  const char *StarDescribe = "";
  RBuildingTipsBtnListData TipButtons;
  QHash<int, RBuildingLvlSpecs> Lvls;
  QJsonObject ToJson(){
    QJsonObject lJson;
    
    lJson["index"] = index;
    lJson["buildingID"] = (int)buildingID;
    lJson["oldUnlocklevel"] = oldUnlocklevel;
    lJson["oldShowlevel"] = oldShowlevel;
    lJson["unlocklevel"] = unlocklevel;
    lJson["showlevel"] = showlevel;
    lJson["bType"] = (int)bType;
    lJson["isDemolish"] = isDemolish;
    lJson["isExchange"] = isExchange;
    lJson["isBuild"] = isBuild;
    lJson["isUpgrade"] = isUpgrade;
    lJson["maxCount"] = maxCount;
    lJson["maxLvl"] = maxLvl;
    lJson["initLvl"] = initLvl;
    lJson["openWl"] = openWl;
    lJson["openStar"] = openStar;
    lJson["maxStarLv"] = maxStarLv;
    lJson["isCanBuild"] = isCanBuild;
    lJson["addmaxstarlv"] = (int)addmaxstarlv;
    lJson["BuildingName"] = BuildingName;
    lJson["BuildingIcon"] = BuildingIcon;
    lJson["BuildingBrief"] = BuildingBrief;
    lJson["UpgradeBrief"] = UpgradeBrief;
    lJson["Describe"] = Describe;
    lJson["WarDescribe"] = WarDescribe;
    lJson["StarDescribe"] = StarDescribe;
    lJson["TipButtons"] = TipButtons.ToJson();
    QJsonObject lLvls;
    for(auto [lLvl, lOneLvlData] : Lvls.asKeyValueRange())
      lLvls[QString::number(lLvl)] = lOneLvlData.ToJson();
    lJson["Lvls"] = lLvls;
    return lJson;
  }
};

Q_DECLARE_METATYPE(RBuildingSpecs);


struct RBuildingTipConfig : public QObject
{
	unsigned int btnId = 1003;
	EBuildingTips btnEnum = EBuildingTips::OpDetails;
	QString OpName = "common_text_059";
	QString Desc = "common_text_059";
	QString PicFile = "icon_building_details.png";
	unsigned int OpSortIndex = 30;
	float scale = 0;
	QPoint offset = {5, 0};
  QJsonObject ToJson(){
    return{
      {"btnId", (int)btnId},
      {"btnEnum", (int)btnEnum},
      {"ActionName", OpName},
      {"BtnDesc", Desc},
      {"PicFile", PicFile},
      {"OpSortIndex", (int)OpSortIndex},
      {"scale", scale},
      {"offset", QJsonObject({
        {"x", offset.x()},
        {"y", offset.y()}
      })}
    };
  }
};