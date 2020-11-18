#ifndef OBJECTUSEMULTIPLEMESSAGE_H
#define OBJECTUSEMULTIPLEMESSAGE_H

#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectUseMultipleMessage : public ObjectUseMessage {
public:
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif