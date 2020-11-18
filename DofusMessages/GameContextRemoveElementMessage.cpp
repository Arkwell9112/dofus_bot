#include "GameContextRemoveElementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextRemoveElementMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void GameContextRemoveElementMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}
