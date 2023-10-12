#include "Building.DB.h"
#include "Building.Static.h"

QList< CityBuilding > CityBuilding::GetCityBuildings(int pPlayerID, int pCityID){
  QList< CityBuilding > lBuildings;
  
  return lBuildings;
}

bool CityBuilding::Create(int pPlayerID, int pCityID){
  auto lBuilding = Select({"*"}, R"("_PlayerID" = ? AND "_CityID" = ? LIMIT 1)", {pPlayerID, pCityID});
  if(!lBuilding.isEmpty())
    return false;
  
  for(auto lOneBuilding : BuildingStatic::Get()->GetBuildingList()){
    auto lBuilding = CityBuilding::Create();
    lBuilding->_PlayerID = pPlayerID;
    lBuilding->_CityID = pCityID;
    lBuilding->_Type = lOneBuilding._Type;
    lBuilding->_Index = lOneBuilding._Index;
    lBuilding->_Lvl = lOneBuilding._Lvl;
    lBuilding->_StarLvl = lOneBuilding._StarLvl;
    lBuilding->_State = lOneBuilding._State;
    auto lID = lBuilding->Insert();
    qDebug() << "Create building" <<lID;
  }
  return true;
}