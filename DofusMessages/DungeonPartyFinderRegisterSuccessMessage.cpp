#include "DungeonPartyFinderRegisterSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonPartyFinderRegisterSuccessMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _dungeonIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _dungeonIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->dungeonIds.push_back(_val1);
    }
}

void DungeonPartyFinderRegisterSuccessMessage::_dungeonIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->dungeonIds.push_back(_val);
}
