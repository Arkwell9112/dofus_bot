#include "RecycleResultMessage.h"
#include "EvolutiveObjectRecycleResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/RecycledItem.h"

#include "../DofusTypes/Item.h"

void EvolutiveObjectRecycleResultMessage::deserialize(CustomDataInput *input) {
    RecycledItem _item1;
    unsigned int _recycledItemsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _recycledItemsLen; _i1++) {
        _item1.deserialize(input);
        this->recycledItems.push_back(_item1);
    }
}