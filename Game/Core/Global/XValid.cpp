#include "XValid.h"

XValid *XValid::Get(){
  static XValid *lInstance = new XValid();
  return lInstance;
}

int XValid::IsID(const QJsonValue &pID){
  return pID.toInt();
}

int XValid::IsPlayerID(const QJsonValue &pID){
  return pID.toInt();
}

int XValid::IsAmount(const QJsonValue &pAmount){
  return pAmount.toInt();
}

float XValid::IsFloat(const QJsonValue &pFloat){
  return pFloat.toInt();
}

QString XValid::IsEmail(const QJsonValue &pEmail){
  return pEmail.toString();
}

QString XValid::IsKeyword(const QJsonValue &pKeyword){
  return pKeyword.toString();
}
