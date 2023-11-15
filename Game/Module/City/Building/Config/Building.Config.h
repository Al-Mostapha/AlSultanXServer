#pragma once
#include "Module/City/Building/Building.Type.h"

class CBuilding{
  public:
    QHash<EBuilding, RBuildingSpecs> _BuildingSpecs;
    static CBuilding *Get();
    void Init();
    void InitCastle();
    void InitWall();
    void InitArrowTower();
    void InitWatchTower();
    void InitDepot();
    void InitEventCenter();
    void InitMerchant();
    void InitPort();
    void InitTroopDetails();
    void InitBulletin();
    void InitEmbassy();
    void InitMarket();
    void InitInstitute();
    void InitTreasurePool();
    void InitBlacksmith();
    void InitStable();
    void InitTargetRange();
    void InitBarrack();
    void InitChariotPlant();
    void InitFortress();
    void InitDrillGrounds();
    void InitHallOfWar();
    void InitFarm();
    void InitLumberMill();
    void InitIronMine();
    void InitSilverMine();
    void InitMarchingTent();
    void InitFirstAidTent();
    void InitMiracle();
    void InitElitePalace();
    void InitCrystalMine();
    void InitMaterialWorkShop();
    void InitTrainHall();
    void InitHeroesMonument();
    void InitPrison();
    void InitStarBraveStatue();
    void InitLeisureHouse();
    void InitNebulaPalace();
};