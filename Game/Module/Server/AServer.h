#pragma once
#include <QObject>
#include "Core/IController.h"

class AServer : public IController
{
  Q_OBJECT
  X_Controller(AServer)

public:
  Q_INVOKABLE QVariantHash GetServerState();
};

Q_DECLARE_METATYPE(AServer)