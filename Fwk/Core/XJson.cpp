#include "XJson.h"
#include <QMetaProperty>
#include <QJsonDocument>

void XJson::FromJson(const QJsonObject &pJson)
{
  auto lMeta = metaObject();
  for (int i = 0; i < lMeta->propertyCount(); i++)
  {
    auto lProperty = lMeta->property(i);
    auto lName = lProperty.name();
    auto lValue = pJson.value(lName).toVariant();
    setProperty(lName, lValue);
  }
}

void XJson::FromJsonString(const QString &pJson)
{
  FromJson(QJsonDocument::fromJson(pJson.toUtf8()).object());
}

QJsonObject XJson::ToJson(){
  QJsonObject lJson;
  auto lMeta = metaObject();
  for (int i = 0; i < lMeta->propertyCount(); i++)
  {
    auto lProperty = lMeta->property(i);
    auto lName = lProperty.name();
    auto lValue = property(lName);
    lJson.insert(lName, QJsonValue::fromVariant(lValue));
  }
  return lJson;
}

QString XJson::ToJsonString(){
  return QJsonDocument(ToJson()).toJson();
}