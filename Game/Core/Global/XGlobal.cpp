#include "XGlobal.h"
#include <QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QJsonDocument>

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
  _Logger->Init();
  _DB = lDB;
  return true;
}