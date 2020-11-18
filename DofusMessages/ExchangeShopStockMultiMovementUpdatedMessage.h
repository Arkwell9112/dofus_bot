#ifndef EXCHANGESHOPSTOCKMULTIMOVEMENTUPDATEDMESSAGE_H
#define EXCHANGESHOPSTOCKMULTIMOVEMENTUPDATEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeShopStockMultiMovementUpdatedMessage : public DeserializeInterface {
public:
    std::vector<ObjectItemToSell> objectInfoList;

    void deserialize(CustomDataInput *input);

private:
};

#endif