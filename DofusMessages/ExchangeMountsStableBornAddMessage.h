#ifndef EXCHANGEMOUNTSSTABLEBORNADDMESSAGE_H
#define EXCHANGEMOUNTSSTABLEBORNADDMESSAGE_H

#include "ExchangeMountsStableAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountsStableBornAddMessage : public ExchangeMountsStableAddMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif