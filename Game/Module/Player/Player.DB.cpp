#include "Player.DB.h"
#include <QMetaProperty>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

void getPlayer(){
  QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
	// db.setHostName("127.0.0.1");
  db.setHostName("127.0.0.1");
	// db.setDatabaseName("FirstDB");
  db.setDatabaseName("AlSultan_S1");
	// db.setUserName("demo");
  db.setUserName("postgres");
	// db.setPassword("password");
  db.setPassword("root");
  db.setPort(5432);
  bool ok = db.open();

  if (ok)
  {
 	  QSqlQuery query("SELECT * FROM \"_Player\"");
    while (query.next())
    {
      qWarning() << query.value(0).toString();
      qWarning() << query.value(1).toString();
    }
    
    qDebug() << query.lastError().text();
  }
}

PlayerDB::PlayerDB(IDataBaseService *pDB, QObject* a_Parent) : XModel(){
  _TableName = "_Player";
  getPlayer();
  RegisterColumn();
};