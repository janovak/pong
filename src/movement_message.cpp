#include "movement_message.h"

#include <cassert>

const int MovementMessage::kMovementMessageLength = 3;

MovementMessage::MovementMessage() {

}

MovementMessage::MovementMessage(const unsigned int entity_id, const unsigned int position)
    : entity_id_(entity_id),
      position_(position) {
    message_type_ = kMovementMessageType;
}

MovementMessage::~MovementMessage() {

}

std::vector<int8_t> MovementMessage::Serialize() {
    std::vector<int8_t> message_buffer;
    message_buffer.push_back(static_cast<int8_t>(message_type_));
    message_buffer.push_back(static_cast<int8_t>(entity_id_));
    message_buffer.push_back(static_cast<int8_t>(position_));
    return message_buffer;
}

void MovementMessage::Deserialize(int8_t* message_buffer, std::size_t length) {
    assert(length == kMovementMessageLength);
    message_type_ = message_buffer[0];
    entity_id_ = message_buffer[1];
    position_ = message_buffer[2];
}
