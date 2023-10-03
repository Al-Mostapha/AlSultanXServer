#include "XGlobal.h"
#include <QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "Core/DB/XPgDataBase.h"
#include "Core/Logger/XLogger.h"
#include "Core/Setting/XSetting.h"
#include "Module/City/Building/Building.DB.h"

XGlobal *XGlobal::Get(){
  static XGlobal _Instance;
  return &_Instance;
}

bool XGlobal::Init(){
  XSetting::Get()->Init();
  _Logger = new XLogger();
  auto lDB = new XPgDataBase();
  lDB->Init();
  auto lList = lDB->Select<$Building>({"*"}, "\"_CityBuilding\"", "true");
  for(auto i = 0; i < lList.size(); i++){
    qDebug() << lList[i]->Get_PlayerID();
  }
  _Logger->Init();
  _DB = lDB;

  return true;
}