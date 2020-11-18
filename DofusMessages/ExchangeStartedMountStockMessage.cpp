#include "ExchangeStartedMountStockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeStartedMountStockMessage::deserialize(CustomDataInput *input) {
    ObjectItem _item1;
    unsigned int _objectsInfosLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsInfosLen; _i1++) {
        _item1.deserialize(input);
        this->objectsInfos.push_back(_item1);
    }
}