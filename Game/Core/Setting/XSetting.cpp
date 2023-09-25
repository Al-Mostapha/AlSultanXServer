#include "XSetting.h"
#include <QCoreApplication>
#include <QSettings>

XSetting *XSetting::Get(){
  static XSetting lSetting;
  return &lSetting;
}

bool XSetting::Init(){
  auto lPath = QCoreApplication::applicationFilePath() + "/Config/Config.Static.ini";
  QSettings lSettings(lPath, QSettings::IniFormat);
  _DBHost     = lSettings.value("DB/DBHost").toString();
  _DBName     = lSettings.value("DB/DBName").toString();
  _DBUser     = lSettings.value("DB/DBUser").toString();
  _DBPassword = lSettings.value("DB/DBPassword").toString();
  _DBPort     = lSettings.value("DB/DBPort").toInt();
  return true;
}