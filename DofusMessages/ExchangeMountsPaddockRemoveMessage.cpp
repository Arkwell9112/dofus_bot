#include "ExchangeMountsPaddockRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMountsPaddockRemoveMessage::deserialize(CustomDataInput *input) {
    int _val1 = 0;
    unsigned int _mountsIdLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mountsIdLen; _i1++) {
        _val1 = input->readVarInt();
        this->mountsId.push_back(_val1);
    }
}

void ExchangeMountsPaddockRemoveMessage::_mountsIdFunc(CustomDataInput *input) {
    int _val = input->readVarInt();
    this->mountsId.push_back(_val);
}
