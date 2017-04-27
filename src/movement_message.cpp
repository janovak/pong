#include "movement_message.h"

#include <cassert>

MovementMessage::MovementMessage() {

}

MovementMessage::MovementMessage(unsigned int entityId, unsigned int position)
    : entityId_(entityId),
      position_(position) {
    messageType_ = MOVEMENT_MESSAGE_TYPE;
}

MovementMessage::~MovementMessage() {

}

sf::Packet MovementMessage::Serialize() {
    sf::Packet packet;
    packet << messageType_ << entityId_ << position_;
    return packet;
}

void MovementMessage::Deserialize(sf::Packet packet) {
    if (packet >> messageType_ >> entityId_ >> position_) {
        // successful
    }
}
