#ifndef EXCHANGESTARTEDMOUNTSTOCKMESSAGE_H
#define EXCHANGESTARTEDMOUNTSTOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeStartedMountStockMessage : public DeserializeInterface {
public:
    std::vector<ObjectItem> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif