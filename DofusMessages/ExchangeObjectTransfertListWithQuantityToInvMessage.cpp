#include "ExchangeObjectTransfertListWithQuantityToInvMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectTransfertListWithQuantityToInvMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _idsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->ids.push_back(_val1);
    }
    unsigned int _qtysLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _qtysLen; _i2++) {
        _val2 = input->readVarUhInt();
        if (_val2 < 0) {

        }
        this->qtys.push_back(_val2);
    }
}

void ExchangeObjectTransfertListWithQuantityToInvMessage::_idsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->ids.push_back(_val);
}

void ExchangeObjectTransfertListWithQuantityToInvMessage::_qtysFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->qtys.push_back(_val);
}
