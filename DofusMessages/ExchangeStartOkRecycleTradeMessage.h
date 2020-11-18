#ifndef EXCHANGESTARTOKRECYCLETRADEMESSAGE_H
#define EXCHANGESTARTOKRECYCLETRADEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkRecycleTradeMessage : public DeserializeInterface {
public:
    unsigned int percentToPrism = 0;
    unsigned int percentToPlayer = 0;

    void deserialize(CustomDataInput *input);

private:
    void _percentToPrismFunc(CustomDataInput *input);

    void _percentToPlayerFunc(CustomDataInput *input);
};

#endif