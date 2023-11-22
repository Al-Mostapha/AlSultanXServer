#include "Boot.Mgr.h"
#include "Module/City/Building/Building.Mgr.h"

BootManager &BootManager::Get(){
  static BootManager lInst;
  return lInst;
}

void BootManager::Init(){
  BuildingManager::Get().Init();
};