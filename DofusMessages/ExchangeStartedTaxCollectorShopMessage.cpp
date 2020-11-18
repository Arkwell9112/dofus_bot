#include "ExchangeStartedTaxCollectorShopMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeStartedTaxCollectorShopMessage::deserialize(CustomDataInput *input) {
    ObjectItem _item1;
    unsigned int _objectsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
    this->_kamasFunc(input);
}

void ExchangeStartedTaxCollectorShopMessage::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}
