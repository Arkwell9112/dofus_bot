#ifndef EMOTEPLAYABSTRACTMESSAGE_H
#define EMOTEPLAYABSTRACTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EmotePlayAbstractMessage : public DeserializeInterface {
public:
    unsigned int emoteId = 0;
    double emoteStartTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdFunc(CustomDataInput *input);

    void _emoteStartTimeFunc(CustomDataInput *input);
};

#endif