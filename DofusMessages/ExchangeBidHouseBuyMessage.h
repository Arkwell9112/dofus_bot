#ifndef EXCHANGEBIDHOUSEBUYMESSAGE_H
#define EXCHANGEBIDHOUSEBUYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseBuyMessage : public DeserializeInterface {
public:
    unsigned int uid = 0;
    unsigned int qty = 0;
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _uidFunc(CustomDataInput *input);

    void _qtyFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif