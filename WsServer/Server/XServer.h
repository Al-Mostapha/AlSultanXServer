
#include <QtCore/QObject>
#include <QtCore/QHash>
#include <QtCore/QUuid>
#include <QWebSocketServer>

QT_FORWARD_DECLARE_CLASS(QWebSocket)
QT_FORWARD_DECLARE_CLASS(QString)
QT_FORWARD_DECLARE_CLASS(QUuid)
QT_FORWARD_DECLARE_CLASS(XConnection)

class XServer : public QWebSocketServer
{
    Q_OBJECT
public:
    explicit XServer(quint16 port, QObject *parent = nullptr);
    ~XServer() override;

private slots:
    void onNewConnection();
    void processMessage(const QString &message);
    void socketDisconnected();

private:
    QHash<QUuid, XConnection *> _Connections;
};