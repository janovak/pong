#include "movement_message.h"

#include <cassert>

MovementMessage::MovementMessage(std::uint32_t entityId, std::uint32_t position)
    : entityId_(entityId),
      position_(position) {
    messageType_ = MOVEMENT_MESSAGE_TYPE;
}

sf::Packet MovementMessage::Serialize() {
    sf::Packet packet;
    packet << messageType_ << entityId_ << position_;
    return packet;
}

void MovementMessage::Deserialize(sf::Packet& packet) {
    if (packet >> messageType_ >> entityId_ >> position_) {
        // successful
    }
}
