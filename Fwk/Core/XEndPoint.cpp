#include "XEndPoint.h"

XEndPoint *XEndPoint::FromWsPath(const QString &pPath)
{
  XEndPoint *endPoint = new XEndPoint();
  endPoint->_Path = pPath;

  auto lList = pPath.split("/");
  if(lList.size() < 3)
    return endPoint;

  endPoint->_ActionName     = lList.at(lList.size() - 1); 
  endPoint->_ControllerName = lList.at(lList.size() - 2);
  endPoint->_Scope          = lList.at(lList.size() - 3);
  
  return endPoint;
}

