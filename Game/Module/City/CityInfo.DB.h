#pragma once
#include <QObject>
#include <QUuid>
#include "Core/DB/XModel.h"
#include "DB/XColumn.h"


class CityInfo : public XModel
{
  Q_OBJECT
public:
  X_Column(int, _CityID)
  X_Column(int, _PlayerID)
public:
  X_Model_Ctor(CityInfo)
};