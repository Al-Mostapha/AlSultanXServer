#include "IRequest.h"
#include <QJsonDocument>

IRequest *IRequest::Create()
{
  return new IRequest();
}

IRequest *IRequest::CreateFromWsMsg(const QString &pMsg, XConnection *pCon)
{
  auto lJson = QJsonDocument::fromJson(pMsg.toUtf8()).object();
  auto lRequest = IRequest::Create();
  lRequest->_Connection = pCon;
  lRequest->FromJson(lJson);
  lRequest->_Json = QJsonDocument::fromJson(lRequest->Data.toUtf8()).object();
  return lRequest;
}
