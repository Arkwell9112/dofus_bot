#ifndef EXCHANGESHOPSTOCKSTARTEDMESSAGE_H
#define EXCHANGESHOPSTOCKSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeShopStockStartedMessage : public DeserializeInterface {
public:
    std::vector<ObjectItemToSell> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif