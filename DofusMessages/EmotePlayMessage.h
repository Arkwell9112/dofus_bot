#ifndef EMOTEPLAYMESSAGE_H
#define EMOTEPLAYMESSAGE_H

#include "EmotePlayAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmotePlayMessage : public EmotePlayAbstractMessage {
public:
    double actorId = 0;
    unsigned int accountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actorIdFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);
};

#endif