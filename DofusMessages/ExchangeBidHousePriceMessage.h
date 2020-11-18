#ifndef EXCHANGEBIDHOUSEPRICEMESSAGE_H
#define EXCHANGEBIDHOUSEPRICEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHousePriceMessage : public DeserializeInterface {
public:
    unsigned int genId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _genIdFunc(CustomDataInput *input);
};

#endif