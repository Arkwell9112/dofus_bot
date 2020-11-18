#ifndef OBJECTUSEONCHARACTERMESSAGE_H
#define OBJECTUSEONCHARACTERMESSAGE_H

#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectUseOnCharacterMessage : public ObjectUseMessage {
public:
    double characterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _characterIdFunc(CustomDataInput *input);
};

#endif