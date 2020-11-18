#ifndef LIVINGOBJECTMESSAGEMESSAGE_H
#define LIVINGOBJECTMESSAGEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LivingObjectMessageMessage : public DeserializeInterface {
public:
    unsigned int msgId = 0;
    unsigned int timeStamp = 0;
    std::string owner;
    unsigned int objectGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _msgIdFunc(CustomDataInput *input);

    void _timeStampFunc(CustomDataInput *input);

    void _ownerFunc(CustomDataInput *input);

    void _objectGenericIdFunc(CustomDataInput *input);
};

#endif