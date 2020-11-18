#ifndef EXCHANGEREQUESTONMOUNTSTOCKMESSAGE_H
#define EXCHANGEREQUESTONMOUNTSTOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestOnMountStockMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif