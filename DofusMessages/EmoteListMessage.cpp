#include "EmoteListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EmoteListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _emoteIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _emoteIdsLen; _i1++) {
        _val1 = input->readUnsignedByte();
        if (_val1 < 0 || _val1 > 255) {

        }
        this->emoteIds.push_back(_val1);
    }
}

void EmoteListMessage::_emoteIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readUnsignedByte();
    if (_val < 0 || _val > 255) {

    }
    this->emoteIds.push_back(_val);
}
