#ifndef EXCHANGEBIDHOUSEINLISTUPDATEDMESSAGE_H
#define EXCHANGEBIDHOUSEINLISTUPDATEDMESSAGE_H

#include "ExchangeBidHouseInListAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseInListUpdatedMessage : public ExchangeBidHouseInListAddedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif