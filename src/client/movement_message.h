#ifndef movement_message_h
#define movement_message_h

#include <cstdint>

#include <SFML/Network/Packet.hpp>

#include "message.h"

class MovementMessage : public Message {
public:
    MovementMessage(std::uint32_t entitId, std::uint32_t position);

    sf::Packet Serialize() override;
    void Deserialize(sf::Packet& packet) override;

private:
    std::uint32_t entityId_;
    std::uint32_t position_;
};

#endif
