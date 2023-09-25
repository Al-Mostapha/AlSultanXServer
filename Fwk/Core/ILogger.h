#pragma once
#include <QString>
#include "Core/IManager.h"

class ILogger : public IManager { 
  public:
    virtual void Log(QString pMessage) = 0;
    virtual void LogError(QString pMessage) = 0;
    virtual void LogWarning(QString pMessage) = 0;
    virtual void LogInfo(QString pMessage) = 0;
    virtual void LogAction(QString pMessage) = 0;
};