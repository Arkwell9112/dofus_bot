#include "GameFightLeaveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightLeaveMessage::deserialize(CustomDataInput *input) {
    this->_charIdFunc(input);
}

void GameFightLeaveMessage::_charIdFunc(CustomDataInput *input) {
    this->charId = input->readDouble();
    if (this->charId < -9007199254740990 || this->charId > 9007199254740990) {

    }
}
