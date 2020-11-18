#ifndef EXCHANGEBIDHOUSEUNSOLDITEMSMESSAGE_H
#define EXCHANGEBIDHOUSEUNSOLDITEMSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemGenericQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeBidHouseUnsoldItemsMessage : public DeserializeInterface {
public:
    std::vector<ObjectItemGenericQuantity> items;

    void deserialize(CustomDataInput *input);

private:
};

#endif