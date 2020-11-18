#include "GameRolePlayPlayerLifeStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPlayerLifeStatusMessage::deserialize(CustomDataInput *input) {
    this->_stateFunc(input);
    this->_phenixMapIdFunc(input);
}

void GameRolePlayPlayerLifeStatusMessage::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}

void GameRolePlayPlayerLifeStatusMessage::_phenixMapIdFunc(CustomDataInput *input) {
    this->phenixMapId = input->readDouble();
    if (this->phenixMapId < 0 || this->phenixMapId > 9007199254740990) {

    }
}
