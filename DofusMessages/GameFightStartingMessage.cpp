#include "GameFightStartingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightStartingMessage::deserialize(CustomDataInput *input) {
    this->_fightTypeFunc(input);
    this->_fightIdFunc(input);
    this->_attackerIdFunc(input);
    this->_defenderIdFunc(input);
    this->_containsBossFunc(input);
}

void GameFightStartingMessage::_fightTypeFunc(CustomDataInput *input) {
    this->fightType = input->readByte();
    if (this->fightType < 0) {

    }
}

void GameFightStartingMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameFightStartingMessage::_attackerIdFunc(CustomDataInput *input) {
    this->attackerId = input->readDouble();
    if (this->attackerId < -9007199254740990 || this->attackerId > 9007199254740990) {

    }
}

void GameFightStartingMessage::_defenderIdFunc(CustomDataInput *input) {
    this->defenderId = input->readDouble();
    if (this->defenderId < -9007199254740990 || this->defenderId > 9007199254740990) {

    }
}

void GameFightStartingMessage::_containsBossFunc(CustomDataInput *input) {
    this->containsBoss = input->readBoolean();
}
