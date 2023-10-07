#pragma once
#include <QObject>
#include "Core/XJson.h"
#include "Core/Net.Enum.h"
#include "Server/Connection/XConnection.h"

typedef QHash<QString, QString> XHashString;


class IRequest : public XJson
{
  Q_OBJECT
  public:
  X_Json(QString, Url)
  X_Json(XHashString, Params)
  X_Json(QString, Data)
  X_Json(ERequestMethod, Method)
  X_Json(ERequestContentType, ContentType)
  X_Json(ERequestState, State)
  X_Json(ERequestError, Error)
  X_Json(ERequestType, Type)
  X_Json(XHashString, Headers)
  X_Json(QString, Token)
  X_Json(QString, RequestID)
  X_Json(qint64, Timeout);
  XConnection *_Connection;
  QJsonObject _Json;
  int _PlayerID = 1;
  public:
  static IRequest *Create();
  static IRequest *CreateFromWsMsg(const QString &pMsg, XConnection *pCon);
  QString GetPath();
};