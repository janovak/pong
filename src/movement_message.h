#ifndef movement_message_h
#define movement_message_h

#include <vector>

#include "message.h"

class MovementMessage : public Message {
public:
    MovementMessage();
    MovementMessage(const unsigned int entity_id, const unsigned int position);
    ~MovementMessage();

    std::vector<int8_t> Serialize() override;
    void Deserialize(int8_t* message_buffer, std::size_t length) override;

private:
    unsigned int entity_id_;
    unsigned int position_;
    static const int kMovementMessageLength;
};

#endif
