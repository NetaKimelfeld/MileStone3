//
// Created by efrat on 05/01/19.
//

#ifndef MILESTONE2_SERVER_H
#define MILESTONE2_SERVER_H
#include "ClientHandler.h"

class Server {
public:
    virtual void open(int port, ClientHandler *handler) = 0;

    virtual void stop() = 0;
};

#endif //MILESTONE2_SERVER_H
