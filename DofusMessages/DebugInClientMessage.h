#ifndef DEBUGINCLIENTMESSAGE_H
#define DEBUGINCLIENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class DebugInClientMessage : public DeserializeInterface {
public:
    unsigned int level = 0;
    std::string message;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);

    void _messageFunc(CustomDataInput *input);
};

#endif