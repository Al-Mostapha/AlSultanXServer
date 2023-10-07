#pragma once
#include <QObject>
#include "Core/DB/XModel.h"
#include "DB/IDataBase.Service.h"
#include "DB/XColumn.h"

class PlayerDB : public XModel
{
  Q_OBJECT
public:
  X_Column(int, _PlayerID)
  X_Column(QString, _Name)
  X_Column(QString, _Email)
public:
  PlayerDB(IDataBaseService *pDB, QObject* a_Parent = nullptr);

};