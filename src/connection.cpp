#include "connection.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <algorithm>
#include <iostream>

Connection::Connection(const std::string& address, int portNumber) {
    socket_.setBlocking(false);
    if (socket_.connect(address, portNumber) != sf::Socket::Done) {
        // error
    }
}

Connection::~Connection() {

}

void Connection::Send(sf::Packet& packet) {
    sf::Socket::Status status;
    while (true) {
        status = socket_.send(packet);
        if (status == sf::Socket::Partial) {
            continue;
        } else if (status == sf::Socket::Done) {
            break;
        } else {
            std::cerr << "write() failed" << std::endl;
            break;
        }
    }
}

sf::Socket::Status Connection::Receive(sf::Packet& packet) {
    return socket_.receive(packet);
}
