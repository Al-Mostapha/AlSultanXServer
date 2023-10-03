#pragma once
#include "Core/ILogger.h"

class XLogger : public ILogger{
  public:
    static XLogger *Get();
    bool Init() override;
    void Log(QString pMessage) override;
    void LogError(QString pMessage) override;
    void LogWarning(QString pMessage) override;
    void LogInfo(QString pMessage) override;
    void LogAction(QString pMessage) override;
};