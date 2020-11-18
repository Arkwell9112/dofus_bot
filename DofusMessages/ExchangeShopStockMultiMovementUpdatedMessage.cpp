#include "ExchangeShopStockMultiMovementUpdatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeShopStockMultiMovementUpdatedMessage::deserialize(CustomDataInput *input) {
    ObjectItemToSell _item1;
    unsigned int _objectInfoListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectInfoListLen; _i1++) {
        _item1.deserialize(input);
        this->objectInfoList.push_back(_item1);
    }
}