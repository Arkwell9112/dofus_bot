#include "AccessoryPreviewRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccessoryPreviewRequestMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _genericIdLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _genericIdLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->genericId.push_back(_val1);
    }
}

void AccessoryPreviewRequestMessage::_genericIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->genericId.push_back(_val);
}
