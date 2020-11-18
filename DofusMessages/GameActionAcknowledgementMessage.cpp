#include "GameActionAcknowledgementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionAcknowledgementMessage::deserialize(CustomDataInput *input) {
    this->_validFunc(input);
    this->_actionIdFunc(input);
}

void GameActionAcknowledgementMessage::_validFunc(CustomDataInput *input) {
    this->valid = input->readBoolean();
}

void GameActionAcknowledgementMessage::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readByte();
}
