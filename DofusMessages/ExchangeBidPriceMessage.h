#ifndef EXCHANGEBIDPRICEMESSAGE_H
#define EXCHANGEBIDPRICEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidPriceMessage : public DeserializeInterface {
public:
    unsigned int genericId = 0;
    double averagePrice = 0;

    void deserialize(CustomDataInput *input);

private:
    void _genericIdFunc(CustomDataInput *input);

    void _averagePriceFunc(CustomDataInput *input);
};

#endif