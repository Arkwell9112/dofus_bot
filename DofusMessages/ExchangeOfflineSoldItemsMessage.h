#ifndef EXCHANGEOFFLINESOLDITEMSMESSAGE_H
#define EXCHANGEOFFLINESOLDITEMSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemQuantityPriceDateEffects.h"

#include "../DofusTypes/ObjectItemQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeOfflineSoldItemsMessage : public DeserializeInterface {
public:
    std::vector<ObjectItemQuantityPriceDateEffects> bidHouseItems;
    std::vector<ObjectItemQuantityPriceDateEffects> merchantItems;

    void deserialize(CustomDataInput *input);

private:
};

#endif