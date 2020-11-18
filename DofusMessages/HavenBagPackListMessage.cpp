#include "HavenBagPackListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagPackListMessage::deserialize(CustomDataInput *input) {
    int _val1 = 0;
    unsigned int _packIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _packIdsLen; _i1++) {
        _val1 = input->readByte();
        this->packIds.push_back(_val1);
    }
}

void HavenBagPackListMessage::_packIdsFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->packIds.push_back(_val);
}
