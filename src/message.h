#ifndef message_h
#define message_h

#include <vector>

class Message {
public:
    virtual std::vector<int8_t> Serialize() = 0;
    virtual void Deserialize(int8_t* message_buffer, std::size_t length) = 0;

protected:
    enum MessageType {
        kMovementMessageType
    };
    
    int message_type_;
};

#endif
