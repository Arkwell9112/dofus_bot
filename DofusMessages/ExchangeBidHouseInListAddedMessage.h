#ifndef EXCHANGEBIDHOUSEINLISTADDEDMESSAGE_H
#define EXCHANGEBIDHOUSEINLISTADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffect.h"

#include <string>
#include <vector>

class ExchangeBidHouseInListAddedMessage : public DeserializeInterface {
public:
    int itemUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;
    std::vector<ObjectEffect> effects;
    std::vector<double> prices;

    void deserialize(CustomDataInput *input);

private:
    void _itemUIDFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);

    void _objectTypeFunc(CustomDataInput *input);

    void _effectsFunc(CustomDataInput *input);

    void _pricesFunc(CustomDataInput *input);
};

#endif