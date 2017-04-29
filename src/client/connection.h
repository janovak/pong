#ifndef connection_h
#define connection_h

#include <string>
#include <vector>

#include <SFML/Network.hpp>
#include <SFML/Network/Packet.hpp>

class Connection {
public:
    Connection(const std::string& address, int portNumber);
    
    void Send(sf::Packet& packet);
    sf::Socket::Status Receive(sf::Packet& packet);

private:
    sf::TcpSocket socket_;
};

#endif
