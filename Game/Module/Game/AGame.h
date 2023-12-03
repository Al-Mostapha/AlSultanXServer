#pragma once
#include <QObject>
#include "Core/IController.h"

class AGame : public IController
{
  Q_OBJECT
  X_Controller(AGame)

public:
  Q_INVOKABLE QVariantHash GetGameState();
  Q_INVOKABLE QVariantHash GetServersList();
};

Q_DECLARE_METATYPE(AGame)