#ifndef EXCHANGEBIDHOUSEITEMREMOVEOKMESSAGE_H
#define EXCHANGEBIDHOUSEITEMREMOVEOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeBidHouseItemRemoveOkMessage : public DeserializeInterface {
public:
    int sellerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sellerIdFunc(CustomDataInput *input);
};

#endif