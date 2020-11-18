#ifndef EXCHANGEREQUESTONSHOPSTOCKMESSAGE_H
#define EXCHANGEREQUESTONSHOPSTOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestOnShopStockMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif