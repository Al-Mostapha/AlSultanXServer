#pragma once
#include <QJsonObject>
#include "Resource.Enum.h"

struct RResource
{
  unsigned int Coin = 0;
  unsigned int Grain = 0;
  unsigned int Lumber = 0;
  unsigned int Iron = 0;
  unsigned int Silver = 0;
  unsigned int Mithril = 0;
  unsigned int Crystal = 0;
  unsigned int MeteorCrystal = 0;
};

struct RCostResource{
  EResource ResourceID = EResource::None;
  unsigned int Amount = 0;
  QJsonObject ToJson(){
    return {
      {"Type", (int)ResourceID},
      {"Amount", (int)Amount}
    };
  }
};

struct RCapacityResource{
  EResource ResourceID = EResource::None;
  unsigned int Amount = 0;
  QJsonObject ToJson(){
    return {
      {"Type", (int)ResourceID},
      {"Amount", (int)Amount}
    };
  }
};