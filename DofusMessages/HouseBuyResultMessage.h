#ifndef HOUSEBUYRESULTMESSAGE_H
#define HOUSEBUYRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseBuyResultMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    bool bought = false;
    double realPrice = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _realPriceFunc(CustomDataInput *input);
};

#endif