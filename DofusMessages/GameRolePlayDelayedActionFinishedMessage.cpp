#include "GameRolePlayDelayedActionFinishedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayDelayedActionFinishedMessage::deserialize(CustomDataInput *input) {
    this->_delayedCharacterIdFunc(input);
    this->_delayTypeIdFunc(input);
}

void GameRolePlayDelayedActionFinishedMessage::_delayedCharacterIdFunc(CustomDataInput *input) {
    this->delayedCharacterId = input->readDouble();
    if (this->delayedCharacterId < -9007199254740990 || this->delayedCharacterId > 9007199254740990) {

    }
}

void GameRolePlayDelayedActionFinishedMessage::_delayTypeIdFunc(CustomDataInput *input) {
    this->delayTypeId = input->readByte();
    if (this->delayTypeId < 0) {

    }
}
