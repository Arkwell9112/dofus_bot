#ifndef EXCHANGEOBJECTMODIFYPRICEDMESSAGE_H
#define EXCHANGEOBJECTMODIFYPRICEDMESSAGE_H

#include "ExchangeObjectMovePricedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectModifyPricedMessage : public ExchangeObjectMovePricedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif