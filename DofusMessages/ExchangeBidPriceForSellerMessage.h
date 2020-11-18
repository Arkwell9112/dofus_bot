#ifndef EXCHANGEBIDPRICEFORSELLERMESSAGE_H
#define EXCHANGEBIDPRICEFORSELLERMESSAGE_H

#include "ExchangeBidPriceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidPriceForSellerMessage : public ExchangeBidPriceMessage {
public:
    bool allIdentical = false;
    std::vector<double> minimalPrices;

    void deserialize(CustomDataInput *input);

private:
    void _allIdenticalFunc(CustomDataInput *input);

    void _minimalPricesFunc(CustomDataInput *input);
};

#endif