#include "DecraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include "../DofusTypes/DecraftedItemStackInfo.h"

void DecraftResultMessage::deserialize(CustomDataInput *input) {
    DecraftedItemStackInfo _item1;
    unsigned int _resultsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _resultsLen; _i1++) {
        _item1.deserialize(input);
        this->results.push_back(_item1);
    }
}