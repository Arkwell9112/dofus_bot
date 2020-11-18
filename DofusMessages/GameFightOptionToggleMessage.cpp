#include "GameFightOptionToggleMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightOptionToggleMessage::deserialize(CustomDataInput *input) {
    this->_optionFunc(input);
}

void GameFightOptionToggleMessage::_optionFunc(CustomDataInput *input) {
    this->option = input->readByte();
    if (this->option < 0) {

    }
}
