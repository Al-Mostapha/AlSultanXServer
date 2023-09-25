#pragma once

#define X_Column(_Type, _Name) \
  Q_PROPERTY(_Type _Name READ Get##_Name) \
  _Type _Name; \
  _Type Get##_Name() const { return _Name; }

