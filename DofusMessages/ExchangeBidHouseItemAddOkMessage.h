#ifndef EXCHANGEBIDHOUSEITEMADDOKMESSAGE_H
#define EXCHANGEBIDHOUSEITEMADDOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInBid.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeBidHouseItemAddOkMessage : public DeserializeInterface {
public:
    ObjectItemToSellInBid itemInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif