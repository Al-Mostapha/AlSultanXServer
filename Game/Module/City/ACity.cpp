#include <QJsonArray>
#include <QDebug>
#include "ACity.h"
#include "City.DB.h"
#include "CityInfo.DB.h"
#include "Core/Global/XValid.h"



QVariantHash ACity::GetCityList()
{
  auto lCity   = City::Create();
  auto lPlayerID     =  _Request->_PlayerID;
  auto lCityList = lCity->Select({"*"}, R"("_PlayerID" = ?)", {lPlayerID});
  return QVariantHash{
    {"State", "Ok"},
    {"CityList", lCityList}
  };
}


QVariantHash ACity::GetCityInfo()
{
  auto lCityInfo   = CityInfo::Create();
  auto lPlayerID     =  _Request->_PlayerID;
  auto lCityList = lCityInfo->Select({"*"}, R"("_CityID" = ?)", {lPlayerID});
  return QVariantHash{
    {"State", "Ok"},
    {"CityList", lCityList}
  };
}

int ACity::Create(){
  return 0;
}