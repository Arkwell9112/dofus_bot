#include "GameRolePlayDelayedActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayDelayedActionMessage::deserialize(CustomDataInput *input) {
    this->_delayedCharacterIdFunc(input);
    this->_delayTypeIdFunc(input);
    this->_delayEndTimeFunc(input);
}

void GameRolePlayDelayedActionMessage::_delayedCharacterIdFunc(CustomDataInput *input) {
    this->delayedCharacterId = input->readDouble();
    if (this->delayedCharacterId < -9007199254740990 || this->delayedCharacterId > 9007199254740990) {

    }
}

void GameRolePlayDelayedActionMessage::_delayTypeIdFunc(CustomDataInput *input) {
    this->delayTypeId = input->readByte();
    if (this->delayTypeId < 0) {

    }
}

void GameRolePlayDelayedActionMessage::_delayEndTimeFunc(CustomDataInput *input) {
    this->delayEndTime = input->readDouble();
    if (this->delayEndTime < 0 || this->delayEndTime > 9007199254740990) {

    }
}
