#include "UpdateMapPlayersAgressableStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateMapPlayersAgressableStatusMessage::deserialize(CustomDataInput *input) {
    double _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _playerIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _playerIdsLen; _i1++) {
        _val1 = input->readVarUhLong();
        if (_val1 < 0 || _val1 > 9007199254740990) {

        }
        this->playerIds.push_back(_val1);
    }
    unsigned int _enableLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _enableLen; _i2++) {
        _val2 = input->readByte();
        if (_val2 < 0) {

        }
        this->enable.push_back(_val2);
    }
}

void UpdateMapPlayersAgressableStatusMessage::_playerIdsFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->playerIds.push_back(_val);
}

void UpdateMapPlayersAgressableStatusMessage::_enableFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->enable.push_back(_val);
}
