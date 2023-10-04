#include "XServer.h"
#include "Server/Connection/XConnection.h"
#include <QtWebSockets>
#include <QtCore>
#include "Module/City/Building/Building.Ctrl.h"
#include "Server/Request/IRequest.h"
#include "Core/XEndPoint.h"
#include "Core/IController.h"



QT_USE_NAMESPACE

//! [constructor]
AlSultan::XServer::XServer(quint16 port, QObject *parent) {
  SetPort(port);
  SetAddress(QHostAddress::Any);
}

AlSultan::XServer::~XServer()
{
}

void AlSultan::XServer::RegisterController(){

}

void AlSultan::XServer::OnRequest(const QString &pMessage, XConnection *pCon){

  BuildingCtrl *lCtrl = new BuildingCtrl();
  auto lmo = lCtrl->metaObject();
  auto lNewInst = lmo->newInstance();

  auto lRequest = IRequest::CreateFromWsMsg(pMessage, pCon);
  auto lEndpoint = XEndPoint::FromWsPath(lRequest->GetUrl()); 
  auto lController = IController::FromWsPath(lEndpoint);
  lController->SetRequest(lRequest);
  lController->ExecuteAction(lEndpoint->GetActionName());
  lController->Response();
  lController->deleteLater();
}