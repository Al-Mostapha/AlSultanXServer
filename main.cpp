#include <QCoreApplication>
#include <QDebug>
#include <QSettings>
#include "Game/Core/Server/XServer.h"
#include "Game/Module/Player/Player.DB.h"
#include "Game/Core/Global/XGlobal.h"

using namespace AlSultan;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSettings lSettings("Config/Config.Static.ini", QSettings::IniFormat);
    XServer l_Server(8080);
    PlayerDB lPlayerDB(nullptr);
    l_Server.Start();
    l_Server.RegisterController();
    XGlobal::Get()->Init();
    return a.exec();
}