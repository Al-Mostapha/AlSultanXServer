#pragma once
#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>



class IResponse : public QObject
{
  Q_OBJECT


  public:
    enum EContentType
    {
      Text, File, Json,
      Image, Video, Audio,
      Html, Xml, Binary
    };

    static IResponse *Create();
    int _StatusCode = 200;
    QJsonDocument _Data;
    EContentType _ContentType = EContentType::Json;
    QString _RequestID = "RequestID";

    QString GetJsonStr(){
      //_Data.object().insert("RequestID", QJsonValue::fromVariant(_RequestID)); 
      qDebug() << "Response ==> " << _Data.object().keys();
      return _Data.toJson(); 
    }
};