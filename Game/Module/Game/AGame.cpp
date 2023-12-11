#include "AGame.h"

QVariantHash AGame::GetGameState(){
  return QVariantHash{
    {"State", "Ok"},
    {"GameState", "Opened"}
  };
}

QVariantHash AGame::GetServersList(){
  return QVariantHash{
    {"State", "Ok"},
    {"Servers", QVariantList{}}
  };
}