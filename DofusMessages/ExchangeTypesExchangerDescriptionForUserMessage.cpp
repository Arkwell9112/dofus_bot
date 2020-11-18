#include "ExchangeTypesExchangerDescriptionForUserMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeTypesExchangerDescriptionForUserMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_objectTypeFunc(input);
    unsigned int _typeDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _typeDescriptionLen; _i2++) {
        _val2 = input->readVarUhInt();
        if (_val2 < 0) {

        }
        this->typeDescription.push_back(_val2);
    }
}

void ExchangeTypesExchangerDescriptionForUserMessage::_objectTypeFunc(CustomDataInput *input) {
    this->objectType = input->readInt();
    if (this->objectType < 0) {

    }
}

void ExchangeTypesExchangerDescriptionForUserMessage::_typeDescriptionFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->typeDescription.push_back(_val);
}
