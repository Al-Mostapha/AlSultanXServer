#include <QDir>
#include <QHttpServerRequest>
#include "Server/Request/IRequest.h"
#include "Core/XEndPoint.h"
#include "Core/IController.h"
#include "Core/Setting/XSetting.h"
#include "XHttpServer.h"

void XHttpServer::Start(){
  MapRoutes();
  _HttpServer.listen(QHostAddress::Any, _Port);
  _HttpServer.afterRequest([this](const QHttpServerRequest &pReq, QHttpServerResponse &&pRes){
    qDebug() << "Request: " << pReq.url().toString();
    qDebug() << "Response: " << pRes.statusCode();
    pRes.setHeader("Content-Type", "application/json");
    if(pRes.statusCode() == QHttpServerResponse::StatusCode::NotFound){
      pRes = QHttpServerResponse(QJsonObject{
        {"State", "Error"},
        {"Code", 404}, 
        {"Message", "Not Found"}
      }, QHttpServerResponse::StatusCode::NotFound);
    }

    if(pRes.statusCode() == QHttpServerResponse::StatusCode::InternalServerError){
      pRes = QHttpServerResponse(R"({
          "State": "Error",
          "Code": 500,
          "Message": "Internal Server Error"
        })", QHttpServerResponse::StatusCode::InternalServerError);
    }

    return std::move(pRes);
  });
}

XHttpServer::XHttpServer(quint16 pPort, QObject *parent){
  _Port = pPort;
}

QHttpServerResponse XHttpServer::OnRequest(const QHttpServerRequest &pRequest){
  auto lRequest  = IRequest::CreateFromHttpReq(pRequest);
  auto lEndpoint = XEndPoint::FromHttpPath(lRequest->GetUrl()); 
  auto lController = IController::FromHttpPath(lEndpoint);
  lController->SetRequest(lRequest);
  lController->ExecuteAction(lEndpoint->GetActionName());
  auto lRes = lController->HttpResponse();
  lController->deleteLater();
  return lRes;
}

QHttpServerResponse XHttpServer::OnRequestFile(const QString &pFolder, const QString &pFileName){
  QString lFilePath = 
    XSetting::Get()->_StaticFilesPath + QString("Json") + 
    "/" + pFolder +
    "/" + pFileName;
  if(!QFile::exists(lFilePath)){
    return QHttpServerResponse(QHttpServerResponse::StatusCode::NotFound);
  }
  return QHttpServerResponse::fromFile(lFilePath);
}

void XHttpServer::MapRoutes(){
  MapApi();
  MapStaticFiles();
}

void XHttpServer::MapApi(){
  _HttpServer.route("/Api/<arg>/<arg>", [this](QString pClass, QString pMethod, const QHttpServerRequest &pReq){
    return OnRequest(pReq);
  });
}

void XHttpServer::MapStaticFiles(){
  _HttpServer.route("/Static/Json/<arg>/<arg>", [this](QString pFolder, QString pFileName, const QHttpServerRequest &pReq){
    return OnRequestFile(pFolder, pFileName);
  });
}

void XHttpServer::Stop(){

}

void XHttpServer::Send(const QString &pMessage, QUuid pPlayerID){

}

void XHttpServer::Send(const QJsonObject &pMessage, QUuid pPlayerID){

}
