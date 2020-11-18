#ifndef EXCHANGESHOPSTOCKMOVEMENTUPDATEDMESSAGE_H
#define EXCHANGESHOPSTOCKMOVEMENTUPDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeShopStockMovementUpdatedMessage : public DeserializeInterface {
public:
    ObjectItemToSell objectInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif