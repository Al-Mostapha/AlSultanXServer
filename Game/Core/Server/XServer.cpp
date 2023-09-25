#include "XServer.h"
#include "Fwk/Server/Connection/XConnection.h"
#include <QtWebSockets>
#include <QtCore>



QT_USE_NAMESPACE
namespace AlSultan{


//! [constructor]
XServer::XServer(quint16 port, QObject *parent) {
  SetPort(port);
  SetAddress(QHostAddress::Any);
}

XServer::~XServer()
{
}
}
