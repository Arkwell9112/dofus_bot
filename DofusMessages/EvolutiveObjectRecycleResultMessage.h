#ifndef EVOLUTIVEOBJECTRECYCLERESULTMESSAGE_H
#define EVOLUTIVEOBJECTRECYCLERESULTMESSAGE_H

#include "RecycleResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/RecycledItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class EvolutiveObjectRecycleResultMessage : public DeserializeInterface {
public:
    std::vector<RecycledItem> recycledItems;

    void deserialize(CustomDataInput *input);

private:
};

#endif