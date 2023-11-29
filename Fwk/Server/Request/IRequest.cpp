#include "IRequest.h"
#include <QJsonDocument>
#include <QHttpServerRequest>

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

IRequest *IRequest::CreateFromHttpReq(const QHttpServerRequest &pReq){
  auto lReqBody = pReq.body();
  auto lJson = QJsonDocument::fromJson(lReqBody).object();
  auto lRequest = IRequest::Create();
  lRequest->FromJson(lJson);
  lRequest->_Json = lJson;
  lRequest->SetUrl(pReq.url().toString());
  return lRequest;
}