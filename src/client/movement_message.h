#ifndef movement_message_h
#define movement_message_h

#include <SFML/Network/Packet.hpp>

#include "message.h"

class MovementMessage : public Message {
public:
    MovementMessage(unsigned int entitId, unsigned int position);

    sf::Packet Serialize() override;
    void Deserialize(sf::Packet packet) override;

private:
    unsigned int entityId_;
    unsigned int position_;
};

#endif
