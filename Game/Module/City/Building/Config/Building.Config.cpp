#include "Building.Config.h"
#include "QJsonObject"
#include <QJsonDocument>
#include <QFile>
#include "Core/Setting/XSetting.h"

CBuilding *CBuilding::Get(){
  static CBuilding *pBuilding = new CBuilding();
  return pBuilding;
}

void CBuilding::Init(){
  InitCastle();
  InitWall();
  InitArrowTower();
  InitWatchTower();
  InitDepot();
  InitEventCenter();
  InitMerchant();
  InitPort();
  InitTroopDetails();
  InitBulletin();
  InitEmbassy();
  InitMarket();
  InitInstitute();
  InitTreasurePool();
  InitBlacksmith();
  InitStable();
  InitTargetRange();
  InitBarrack();
  InitChariotPlant();
  InitFortress();
  InitDrillGrounds();
  InitHallOfWar();
  InitFarm();
  InitLumberMill();
  InitIronMine();
  InitSilverMine();
  InitMarchingTent();
  InitFirstAidTent();
  InitMiracle();
  InitElitePalace();
  InitCrystalMine();
  // InitMaterialWorkShop();
  InitTrainHall();
  InitHeroesMonument();
  InitPrison();
  InitStarBraveStatue();
  InitLeisureHouse();
  InitNebulaPalace();
  ProduceJson();
}

void CBuilding::ProduceJson(){
  QJsonObject lJson;
  for(auto [lBuildingType, lBuilding] : _BuildingSpecs.asKeyValueRange()){
    lJson.insert(
      QString::number(static_cast<int>(lBuildingType)),
      lBuilding->ToJson());
  }
  QJsonDocument lJsonDoc(lJson);
  QFile file(XSetting::Get()->_StaticFilesPath + "Json/CityBuildings.json");
  file.open(QIODevice::ReadWrite | QIODevice::Text);
  auto lJsonString = lJsonDoc.toJson();
  file.write(lJsonString);
  file.close();
}