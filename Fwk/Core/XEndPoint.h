#pragma once
#include <QObject>

class XEndPoint{
  public:
    QString _Path;
    QString _ControllerName;
    QString _ActionName;
    QString _Scope;
  public:
    static XEndPoint *FromWsPath(const QString &pPath);
    static XEndPoint *FromHttpPath(const QString &pPath);
    QString GetPath() {return _Path;}
    QString GetControllerName() {return _ControllerName;}
    QString GetActionName() {return _ActionName;}
};