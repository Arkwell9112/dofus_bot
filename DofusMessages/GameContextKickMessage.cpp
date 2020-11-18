#include "GameContextKickMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextKickMessage::deserialize(CustomDataInput *input) {
    this->_targetIdFunc(input);
}

void GameContextKickMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}
