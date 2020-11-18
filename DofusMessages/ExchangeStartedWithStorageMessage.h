#ifndef EXCHANGESTARTEDWITHSTORAGEMESSAGE_H
#define EXCHANGESTARTEDWITHSTORAGEMESSAGE_H

#include "ExchangeStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartedWithStorageMessage : public ExchangeStartedMessage {
public:
    unsigned int storageMaxSlot = 0;

    void deserialize(CustomDataInput *input);

private:
    void _storageMaxSlotFunc(CustomDataInput *input);
};

#endif