#ifndef EMOTEPLAYREQUESTMESSAGE_H
#define EMOTEPLAYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmotePlayRequestMessage : public DeserializeInterface {
public:
    unsigned int emoteId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdFunc(CustomDataInput *input);
};

#endif