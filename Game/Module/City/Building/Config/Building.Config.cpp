#include "Building.Config.h"
#include "QJsonObject"

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
  InitMaterialWorkShop();
  InitTrainHall();
  InitHeroesMonument();
  InitPrison();
  InitStarBraveStatue();
  InitLeisureHouse();
  InitNebulaPalace();
}

void CBuilding::ProduceJson(){
  QJsonObject lJson;
  QVariantHash lBuildingHash;
  // for(auto [lBuildingType, lBuilding] : _BuildingSpecs.asKeyValueRange()){
  //   lBuildingHash.insert(
  //     QString::number(static_cast<int>(lBuildingType)),
  //     QVariant(lBuilding));
  // }

}