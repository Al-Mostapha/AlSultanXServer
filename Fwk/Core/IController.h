#pragma once
#include <QObject>
#include "XEndPoint.h"
#include "Server/Request/IRequest.h"
#include "Server/Response/IResponse.h"
#include <QDebug>

#define X_AddCtrl(pController) \
  inline static bool _##pController##Registered = IController::RegisterController<pController>(#pController);

#define X_Controller_Ctor(pController) \
  public: \
    Q_INVOKABLE pController() {}

#define X_Controller(pController) \
  X_AddCtrl(pController) \
  X_Controller_Ctor(pController)

class IController : public QObject
{
  Q_OBJECT
  public:
  IRequest *_Request;
  IResponse *_Response;
  static QHash<QString, IController *> _Controllers;
  protected:
    template <typename T>
    static bool RegisterController(const char *pClassName){
      qRegisterMetaType<T>(pClassName);
      _Controllers.insert(pClassName, new T());
      qInfo() << "Controller ==> " << pClassName << " -- registered";
      return true;
    }
  public:
    explicit IController(QObject *parent = nullptr);
    static IController *FromWsPath(XEndPoint *pEndPoint);
    static IController *FromClassName(const QString &pClassName);
    void ExecuteAction(const QString &pActionName);
    void SetRequest(IRequest *pRequest) {_Request = pRequest;}
    void Response();
};

Q_DECLARE_METATYPE(IController *)