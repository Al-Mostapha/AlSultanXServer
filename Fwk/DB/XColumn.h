#pragma once

#include <QObject>
#include <QVariant>

class XColumn
{
public:
  QString _Name;
  QVariant::Type _Type;
  QVariant _Value;
  QString _Default;
  bool _NotNull;
  bool _PrimaryKey;
  bool _Unique;
  bool _AutoIncrement;
  bool _Check;
  bool _ForeignKey;
};

Q_DECLARE_METATYPE(XColumn)