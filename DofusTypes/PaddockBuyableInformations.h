#ifndef PADDOCKBUYABLEINFORMATIONS_H
#define PADDOCKBUYABLEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockBuyableInformations : public DeserializeInterface {
public:
    double price = 0;
    bool locked = false;

    void deserialize(CustomDataInput *input);

private:
    void _priceFunc(CustomDataInput *input);

    void _lockedFunc(CustomDataInput *input);
};

#endif