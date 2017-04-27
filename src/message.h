#ifndef message_h
#define message_h

#include <vector>

#include <SFML/Network/Packet.hpp>

class Message {
public:
    virtual sf::Packet Serialize() = 0;
    virtual void Deserialize(sf::Packet packet) = 0;

protected:
    enum MessageType {
        MOVEMENT_MESSAGE_TYPE
    };

    int messageType_;
};

#endif
