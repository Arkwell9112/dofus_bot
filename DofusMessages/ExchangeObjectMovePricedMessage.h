#ifndef EXCHANGEOBJECTMOVEPRICEDMESSAGE_H
#define EXCHANGEOBJECTMOVEPRICEDMESSAGE_H

#include "ExchangeObjectMoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectMovePricedMessage : public ExchangeObjectMoveMessage {
public:
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _priceFunc(CustomDataInput *input);
};

#endif