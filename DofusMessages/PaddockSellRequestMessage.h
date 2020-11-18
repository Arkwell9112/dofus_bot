#ifndef PADDOCKSELLREQUESTMESSAGE_H
#define PADDOCKSELLREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockSellRequestMessage : public DeserializeInterface {
public:
    double price = 0;
    bool forSale = false;

    void deserialize(CustomDataInput *input);

private:
    void _priceFunc(CustomDataInput *input);

    void _forSaleFunc(CustomDataInput *input);
};

#endif