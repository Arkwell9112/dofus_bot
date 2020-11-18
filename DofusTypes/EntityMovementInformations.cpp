#include "EntityMovementInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EntityMovementInformations::deserialize(CustomDataInput *input) {
    int _val2 = 0;
    this->_idFunc(input);
    unsigned int _stepsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _stepsLen; _i2++) {
        _val2 = input->readByte();
        this->steps.push_back(_val2);
    }
}

void EntityMovementInformations::_idFunc(CustomDataInput *input) {
    this->id = input->readInt();
}

void EntityMovementInformations::_stepsFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->steps.push_back(_val);
}
