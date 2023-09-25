#include "XGlobal.h"
#include <QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "Core/DB/XPgDataBase.h"
#include "Core/Logger/XLogger.h"

XGlobal *XGlobal::Get(){
  static XGlobal _Instance;
  return &_Instance;
}

bool XGlobal::Init(){

  _Logger = new XLogger();
  _DB = new XPgDataBase();

  _Logger->Init();
  _DB->Init();

  return true;
}