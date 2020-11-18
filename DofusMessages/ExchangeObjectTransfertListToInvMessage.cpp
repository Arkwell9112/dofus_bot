#include "ExchangeObjectTransfertListToInvMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectTransfertListToInvMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _idsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->ids.push_back(_val1);
    }
}

void ExchangeObjectTransfertListToInvMessage::_idsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->ids.push_back(_val);
}
