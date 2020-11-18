#ifndef STARTUPACTIONFINISHEDMESSAGE_H
#define STARTUPACTIONFINISHEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StartupActionFinishedMessage : public DeserializeInterface {
public:
    bool success = false;
    unsigned int actionId = 0;
    bool automaticAction = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _actionIdFunc(CustomDataInput *input);
};

#endif