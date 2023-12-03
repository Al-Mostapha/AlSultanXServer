#include "AServer.h"

QVariantHash AServer::GetServerState(){
  return QVariantHash{
    {"State", "Ok"},
    {"ServerState", "Opened"}
  };
}