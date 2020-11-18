#ifndef EMOTEADDMESSAGE_H
#define EMOTEADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmoteAddMessage : public DeserializeInterface {
public:
    unsigned int emoteId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdFunc(CustomDataInput *input);
};

#endif