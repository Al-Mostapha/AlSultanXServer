#include "Building.Mgr.h"
#include "Config/Building.Config.h"
#include "Config/BuildingTips.Config.h"

BuildingManager &BuildingManager::Get(){
  static BuildingManager lInst;
  return lInst;
}

void BuildingManager::Init(){
  CBuilding::Get()->Init();
  CBuildingTip::Get()->Init();
}