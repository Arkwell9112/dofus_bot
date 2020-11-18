#include "ExchangeShopStockMultiMovementRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeShopStockMultiMovementRemovedMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _objectIdListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectIdListLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->objectIdList.push_back(_val1);
    }
}

void ExchangeShopStockMultiMovementRemovedMessage::_objectIdListFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->objectIdList.push_back(_val);
}
