#ifndef HOUSESELLINGUPDATEMESSAGE_H
#define HOUSESELLINGUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseSellingUpdateMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    double realPrice = 0;
    std::string buyerName;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);

    void _realPriceFunc(CustomDataInput *input);

    void _buyerNameFunc(CustomDataInput *input);
};

#endif