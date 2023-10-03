#include "IController.h"
#include <QMetaMethod>

QHash<QString, IController *> IController::_Controllers = QHash<QString, IController *>();

IController::IController(QObject *parent) : QObject(parent)
{

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
  QMetaObject::invokeMethod(this, pActionName.toStdString().c_str());
}

