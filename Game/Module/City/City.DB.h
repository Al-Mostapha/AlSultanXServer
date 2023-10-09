#pragma once
#include <QObject>
#include <QUuid>
#include "Core/DB/XModel.h"
#include "DB/XColumn.h"


class City : public XModel
{
  Q_OBJECT
public:
  X_Column(int, _CityID)
  X_Column(int, _PlayerID)
  X_Column(QString, _Name)
  X_Column(int, _Lvl)
public:
  X_Model_Ctor(City)
};