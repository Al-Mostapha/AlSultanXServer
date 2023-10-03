#include "XLogger.h"  
#include <QDateTime>

bool XLogger::Init(){
  return true;
}

XLogger *Get(){
  static XLogger *lInstance = new XLogger();
  return lInstance;
}

void XLogger::Log(QString pMessage){
  QString lMessage = QString("%1: %2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(pMessage);
  qDebug() << lMessage;
}

void XLogger::LogError(QString pMessage){
  QString lMessage = QString("%1: %2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(pMessage);
  qCritical() << lMessage;
}

void XLogger::LogWarning(QString pMessage){
  QString lMessage = QString("%1: %2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(pMessage);
  qWarning() << lMessage;
}

void XLogger::LogInfo(QString pMessage){
  QString lMessage = QString("%1: %2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(pMessage);
  qDebug() << lMessage;
}

void XLogger::LogAction(QString pMessage){
  QString lMessage = QString("%1: %2").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(pMessage);
  qDebug() << lMessage;
}