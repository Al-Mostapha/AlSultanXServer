#pragma once
#include <QString>
#include <QJsonValue>

class XValid{
  public:
    static XValid *Get();
    int IsID(const QJsonValue &pID);
    int IsPlayerID(const QJsonValue &pID);
    int IsAmount(const QJsonValue &pAmount);
    float IsFloat(const QJsonValue &pFloat);
    QString IsEmail(const QJsonValue &pEmail);
    QString IsKeyword(const QJsonValue &pKeyword);
};