#pragma once
#include <QObject>
#include <QJsonObject>

#define X_Json(_Type, _Name) \
  Q_PROPERTY(_Type _Name READ Get##_Name WRITE Set##_Name) \
  _Type _Name; \
  _Type Get##_Name() const { return _Name; } \
  void Set##_Name(_Type pVal) { _Name = pVal; }

class XJson : public QObject
{
  public:
    virtual  ~XJson() {}
    void FromJson(const QJsonObject &pJson);
    void FromJsonString(const QString &pJson);
    QJsonObject ToJson();
    QString ToJsonString();
};