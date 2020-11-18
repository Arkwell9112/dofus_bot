#ifndef EXCHANGECRAFTRESULTWITHOBJECTIDMESSAGE_H
#define EXCHANGECRAFTRESULTWITHOBJECTIDMESSAGE_H

#include "ExchangeCraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftResultWithObjectIdMessage : public ExchangeCraftResultMessage {
public:
    unsigned int objectGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectGenericIdFunc(CustomDataInput *input);
};

#endif