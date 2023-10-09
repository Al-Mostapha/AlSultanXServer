#include "Building.Ctrl.h"
#include "Building.DB.h"
#include "Core/Global/XValid.h"
#include <QJsonArray>
#include <QDebug>


// BuildingCtrl::BuildingCtrl(QObject *parent) : QObject(parent)
// {

// }

// BuildingCtrl::~BuildingCtrl()
// {

// }

QVariantHash ACityBuilding::GetBuildingList()
{
  auto lBuildingDB   = CityBuilding::Create();
  auto lPlayerID     =  _Request->_PlayerID;
  auto lCityID       =  XValid::Get()->IsID(_Request->_Json.value("CityID"));
  auto lBuildingList = lBuildingDB->Select({"*"}, R"("_PlayerID" = ? AND "_CityID" = ?)", {lPlayerID, lCityID});

  return QVariantHash{
    {"State", "Ok"},
    {"BuildingList", lBuildingList}
  };
}