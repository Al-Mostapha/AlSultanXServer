#pragma once
#include <QObject>
#include <QUuid>
#include "Building.Enum.h"
#include "DB/IModel.h"
#include "DB/IDataBase.Service.h"
#include "DB/XColumn.h"


class $Building : public IModel
{
  Q_OBJECT
public:
  X_Column(QUuid, _BuildingID)
  X_Column(int, _PlayerID)
  X_Column(EBuilding, _Type)
  X_Column(EBuildingIndex, _Index)
  X_Column(int, _Lvl)
  X_Column(int, _StarLvl)
  X_Column(EBuildingState, _State)
public:
  X_Model_Ctor($Building)
  QList< $Building > GetCityBuildings(int pPlayerID, int pCityID);
};