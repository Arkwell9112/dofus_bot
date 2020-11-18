#include "DebtsDeleteMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DebtsDeleteMessage::deserialize(CustomDataInput *input) {
    double _val2 = 0;
    this->_reasonFunc(input);
    unsigned int _debtsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _debtsLen; _i2++) {
        _val2 = input->readDouble();
        if (_val2 < 0 || _val2 > 9007199254740990) {

        }
        this->debts.push_back(_val2);
    }
}

void DebtsDeleteMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}

void DebtsDeleteMessage::_debtsFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->debts.push_back(_val);
}
