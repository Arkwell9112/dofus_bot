#ifndef BIDEXCHANGEROBJECTINFO_H
#define BIDEXCHANGEROBJECTINFO_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BidExchangerObjectInfo : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;
    std::vector<ObjectEffect> effects;
    std::vector<double> prices;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);

    void _objectTypeFunc(CustomDataInput *input);

    void _effectsFunc(CustomDataInput *input);

    void _pricesFunc(CustomDataInput *input);
};

#endif