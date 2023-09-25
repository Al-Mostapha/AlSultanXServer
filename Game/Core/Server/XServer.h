
#include <QtCore/QObject>
#include <QtCore/QHash>
#include <QtCore/QUuid>
#include "Fwk/Server/WsServer/XServer.Ws.h"

QT_FORWARD_DECLARE_CLASS(QWebSocket)
QT_FORWARD_DECLARE_CLASS(QString)
QT_FORWARD_DECLARE_CLASS(QUuid)
QT_FORWARD_DECLARE_CLASS(XConnection)

namespace AlSultan{

class XServer : public WS::XServer
{
    Q_OBJECT
public:
    explicit XServer(quint16 port, QObject *parent = nullptr);
    ~XServer() override;

    // void OnNewConnection() override;
    // void ProcessMessage(const QString &message)override;
    // void SocketDisconnected() override;

private:
    QHash<QUuid, XConnection *> _Connections;
};

}