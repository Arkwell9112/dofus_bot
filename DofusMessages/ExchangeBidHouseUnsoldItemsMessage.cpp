#include "ExchangeBidHouseUnsoldItemsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemGenericQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeBidHouseUnsoldItemsMessage::deserialize(CustomDataInput *input) {
    ObjectItemGenericQuantity _item1;
    unsigned int _itemsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _itemsLen; _i1++) {
        _item1.deserialize(input);
        this->items.push_back(_item1);
    }
}