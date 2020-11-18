#ifndef EXCHANGESETCRAFTRECIPEMESSAGE_H
#define EXCHANGESETCRAFTRECIPEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeSetCraftRecipeMessage : public DeserializeInterface {
public:
    unsigned int objectGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectGIDFunc(CustomDataInput *input);
};

#endif