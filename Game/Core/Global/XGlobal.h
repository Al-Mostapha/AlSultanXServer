#pragma once
#include "Core/IManager.h"
#include "DB/IDataBase.Service.h"

class ILogger;

class XGlobal : public IManager{
  IDataBaseService *_DB;
  ILogger *_Logger;
  public:
    static XGlobal *Get();
    bool Init() override;
    IDataBaseService *GetDB(){ return _DB;}
    ILogger *GetLogger(){ return _Logger;}
};