#include "AGame.h"

QVariantHash AGame::GetGameState(){
  return QVariantHash{
    {"State", "Ok"},
    {"GameState", "Opened"}
  };
}