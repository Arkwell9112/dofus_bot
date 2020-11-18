#ifndef HOUSESELLREQUESTMESSAGE_H
#define HOUSESELLREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseSellRequestMessage : public DeserializeInterface {
public:
    unsigned int instanceId = 0;
    double amount = 0;
    bool forSale = false;

    void deserialize(CustomDataInput *input);

private:
    void _instanceIdFunc(CustomDataInput *input);

    void _amountFunc(CustomDataInput *input);

    void _forSaleFunc(CustomDataInput *input);
};

#endif