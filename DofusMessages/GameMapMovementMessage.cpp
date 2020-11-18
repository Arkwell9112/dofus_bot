#include "GameMapMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapMovementMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _keyMovementsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _keyMovementsLen; _i1++) {
        _val1 = input->readShort();
        if (_val1 < 0) {

        }
        this->keyMovements.push_back(_val1);
    }
    this->_forcedDirectionFunc(input);
    this->_actorIdFunc(input);
}

void GameMapMovementMessage::_keyMovementsFunc(CustomDataInput *input) {
    unsigned int _val = input->readShort();
    if (_val < 0) {

    }
    this->keyMovements.push_back(_val);
}

void GameMapMovementMessage::_forcedDirectionFunc(CustomDataInput *input) {
    this->forcedDirection = input->readShort();
}

void GameMapMovementMessage::_actorIdFunc(CustomDataInput *input) {
    this->actorId = input->readDouble();
    if (this->actorId < -9007199254740990 || this->actorId > 9007199254740990) {

    }
}
