#include "ExchangeTypesItemsExchangerDescriptionForUserMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include "../DofusTypes/BidExchangerObjectInfo.h"

void ExchangeTypesItemsExchangerDescriptionForUserMessage::deserialize(CustomDataInput *input) {
    BidExchangerObjectInfo _item2;
    this->_objectTypeFunc(input);
    unsigned int _itemTypeDescriptionsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _itemTypeDescriptionsLen; _i2++) {
        _item2.deserialize(input);
        this->itemTypeDescriptions.push_back(_item2);
    }
}

void ExchangeTypesItemsExchangerDescriptionForUserMessage::_objectTypeFunc(CustomDataInput *input) {
    this->objectType = input->readInt();
    if (this->objectType < 0) {

    }
}
