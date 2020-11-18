#include "GameMapMovementRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapMovementRequestMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _keyMovementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _keyMovementsLen; _i1++) {
        _val1 = input->readShort();
        if (_val1 < 0) {

        }
        this->keyMovements.push_back(_val1);
    }
    this->_mapIdFunc(input);
}

void GameMapMovementRequestMessage::_keyMovementsFunc(CustomDataInput *input) {
    unsigned int _val = input->readShort();
    if (_val < 0) {

    }
    this->keyMovements.push_back(_val);
}

void GameMapMovementRequestMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
