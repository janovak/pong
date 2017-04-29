#include <iostream>

#include <SFML/Network.hpp>
#include <SFML/Network/Packet.hpp>

int main(int, char**) {
    sf::TcpListener listener;
    if (listener.listen(3001) != sf::Socket::Done) {
        // error
    }
    sf::TcpSocket client;
    client.setBlocking(false);
    if (listener.accept(client) != sf::Socket::Done) {
        // error
    }
    while (true) {
        sf::Packet packet;
        sf::Socket::Status status = client.receive(packet);
        if (status == sf::Socket::Done) {
            int type;
            unsigned int entityId;
            unsigned int position;
            packet >> type >> entityId >> position;
            std::cerr << type << " " << entityId << " " << position << std::endl;
        }
    }
}
