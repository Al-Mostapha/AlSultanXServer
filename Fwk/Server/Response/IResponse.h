#pragma once
#include <QObject>



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
    QString _Data = "{\"Test\":\"Test\"}";
    EContentType _ContentType = EContentType::Json;

    QString GetJsonStr(){ return _Data; }
};