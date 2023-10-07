#include "IController.h"
#include <QMetaMethod>

QHash<QString, IController *> IController::_Controllers = QHash<QString, IController *>();

IController::IController(QObject *parent) : QObject(parent)
{
  _Response = new IResponse();
}

IController *IController::FromWsPath(XEndPoint *pEndPoint)
{
  auto lControllerName = pEndPoint->GetControllerName();
  return IController::FromClassName(lControllerName);
}

IController *IController::FromClassName(const QString &pClassName)
{
  auto lMetaType       = QMetaType::type(pClassName.toStdString().c_str());
  if(lMetaType == QMetaType::UnknownType)
    return nullptr;
  auto lMetaObject = QMetaType::metaObjectForType(lMetaType);
  if(lMetaObject == nullptr)
    return nullptr;
  auto lController = lMetaObject->newInstance();
  if(lController == nullptr)
    return nullptr;
  return qobject_cast<IController *>(lController);
}

void IController::ExecuteAction(const QString &pActionName)
{
  QVariantHash _Ret;
  QMetaObject::invokeMethod(this, pActionName.toStdString().c_str(), Q_RETURN_ARG(QVariantHash, _Ret));
  _Ret.insert("RequestID", _Request->RequestID);
  _Response->_Data = QJsonDocument::fromVariant(_Ret);
  _Response->_RequestID = _Request->RequestID;
}

void IController::Response()
{
  _Request->_Connection->SendJson(_Response->GetJsonStr());
}