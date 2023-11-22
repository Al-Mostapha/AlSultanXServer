#include "Building.Mgr.h"
#include "Config/Building.Config.h"

BuildingManager &BuildingManager::Get(){
  static BuildingManager lInst;
  return lInst;
}

void BuildingManager::Init(){
  CBuilding::Get()->Init();
}