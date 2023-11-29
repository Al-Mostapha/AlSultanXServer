#pragma once
#include <QHttpServer>
#include <QHttpServerResponse>
#include <QHttpServerRequest>
#include "Server/IXserver.h"

class XHttpServer : public IXServer {
  QHttpServer _HttpServer;
  public:
    explicit XHttpServer(quint16 port, QObject *parent = nullptr);
    ~XHttpServer() override {}
    void Start() override;
    void Stop() override;
    void RegisterController() override{};
    QHttpServerResponse OnRequest(const QHttpServerRequest &pRequest);
    QHttpServerResponse OnRequestFile(const QString &pFolder, const QString &pFileName);
    void Send(const QString &pMessage, QUuid pPlayerID) override;
    void Send(const QJsonObject &pMessage, QUuid pPlayerID) override;
    private:
    void MapRoutes();
    void MapApi();
    void MapStaticFiles();
};