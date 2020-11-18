#ifndef CHATSMILEYMESSAGE_H
#define CHATSMILEYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatSmileyMessage : public DeserializeInterface {
public:
    double entityId = 0;
    unsigned int smileyId = 0;
    unsigned int accountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _entityIdFunc(CustomDataInput *input);

    void _smileyIdFunc(CustomDataInput *input);

    void _accountIdFunc(CustomDataInput *input);
};

#endif