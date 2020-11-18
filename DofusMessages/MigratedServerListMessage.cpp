#include "MigratedServerListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MigratedServerListMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _migratedServerIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _migratedServerIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->migratedServerIds.push_back(_val1);
    }
}

void MigratedServerListMessage::_migratedServerIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->migratedServerIds.push_back(_val);
}
