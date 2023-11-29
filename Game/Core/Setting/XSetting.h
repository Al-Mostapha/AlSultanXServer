#pragma once
#include "Core/IManager.h"
#include <QString>

class XSetting : public IManager{
  public:
  static XSetting *Get();
  QString _DBHost;
  QString _DBName;
  QString _DBUser;
  QString _DBPassword;
  int _DBPort;
  QString _StaticFilesPath;
  bool Init() override;
};