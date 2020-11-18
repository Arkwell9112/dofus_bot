#include "ChatSmileyExtraPackListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatSmileyExtraPackListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _packIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _packIdsLen; _i1++) {
        _val1 = input->readByte();
        if (_val1 < 0) {

        }
        this->packIds.push_back(_val1);
    }
}

void ChatSmileyExtraPackListMessage::_packIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->packIds.push_back(_val);
}
