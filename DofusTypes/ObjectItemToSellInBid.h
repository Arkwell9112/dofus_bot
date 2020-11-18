#ifndef OBJECTITEMTOSELLINBID_H
#define OBJECTITEMTOSELLINBID_H

#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemToSellInBid : public ObjectItemToSell {
public:
    unsigned int unsoldDelay = 0;

    void deserialize(CustomDataInput *input);

private:
    void _unsoldDelayFunc(CustomDataInput *input);
};

#endif