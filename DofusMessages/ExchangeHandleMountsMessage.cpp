#include "ExchangeHandleMountsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeHandleMountsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_actionTypeFunc(input);
    unsigned int _ridesIdLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _ridesIdLen; _i2++) {
        _val2 = input->readVarUhInt();
        if (_val2 < 0) {

        }
        this->ridesId.push_back(_val2);
    }
}

void ExchangeHandleMountsMessage::_actionTypeFunc(CustomDataInput *input) {
    this->actionType = input->readByte();
}

void ExchangeHandleMountsMessage::_ridesIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->ridesId.push_back(_val);
}
