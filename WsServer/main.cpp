#include <QCoreApplication>
#include <QDebug>
#include <QSettings>
#include "Server/XServer.h"
#include "Game/Module/Player/Player.DB.h"

using namespace AlSultan;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSettings lSettings("Config/Config.Static.ini", QSettings::IniFormat);
    qDebug() << "Hello World";
    qDebug() << lSettings.value("Server/Url").toString();
    XServer l_Server(1234);
    PlayerDB lPlayerDB(nullptr);
    l_Server.Start();
    return a.exec();
}
