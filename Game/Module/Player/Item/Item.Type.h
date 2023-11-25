#pragma once
#include <QJsonObject>

struct RCostItem {
  unsigned int ItemID = 0;
  unsigned int Amount = 0;
  QJsonObject ToJson(){
    return {
      {"ItemID", (int) ItemID},
      {"Amount", (int)Amount}
    };
  }
};