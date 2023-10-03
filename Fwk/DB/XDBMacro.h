#pragma once

#define X_Column(_Type, _Name) \
  Q_PROPERTY(_Type _Name READ Get##_Name WRITE Set##_Name) \
  _Type _Name; \
  _Type Get##_Name() const { return _Name; } \
  void Set##_Name(_Type pVal) { _Name = pVal; }

#define X_Model_Ctor(_Type) \
  _Type() : IModel() {\
    RegisterColumn(); \
  }