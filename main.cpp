#include <QCoreApplication>
#include <QDebug>
#include <QtGlobal>
#include <QSettings>
#include "Game/Core/Server/XServer.h"
#include "Game/Module/City/Building/Building.DB.h"
#include "Game/Core/Global/XGlobal.h"
#include "Game/Module/Boot/Boot.Mgr.h"
#include "Game/Core/Server/XHttpServer.h"

#include <QJsonDocument>

using namespace AlSultan;

int main(int argc, char *argv[])
{
    qputenv("QT_DEBUG_PLUGINS", QByteArray("1"));
    QCoreApplication a(argc, argv);
    QSettings lSettings("Config/Config.Static.ini", QSettings::IniFormat);
    XServer l_Server(8081);
    l_Server.Start();
    l_Server.RegisterController();
    XGlobal::Get()->Init();
    BootManager::Get().Init();

    XHttpServer lHttpServer(8080);
    lHttpServer.Start();


    return a.exec();
}
