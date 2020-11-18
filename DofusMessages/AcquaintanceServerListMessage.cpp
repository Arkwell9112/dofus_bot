#include "AcquaintanceServerListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AcquaintanceServerListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _serversLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->servers.push_back(_val1);
    }
}

void AcquaintanceServerListMessage::_serversFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->servers.push_back(_val);
}
