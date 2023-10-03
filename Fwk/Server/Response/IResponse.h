#pragma once
#include <QObject>



class IResponse : public QObject
{
  Q_OBJECT
  enum EType
  {
    Text, File, Json,
    Image, Video, Audio,
    Html, Xml, Binary
  };

  enum EContentType
  {
    TextPlain, TextHtml, TextXml,
    ImageJpeg, ImagePng, ImageGif,
    VideoMpeg, VideoMp4, VideoWebm,
    AudioMpeg, AudioMp4, AudioWebm,
    Json, ApplicationXml, ApplicationBinary
  };

  public:
    QString _Data;
    EContentType _ContentType = EContentType::Json;
    int _StatusCode = 200;
};