#include "GameContextRefreshEntityLookMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityLook.h"

void GameContextRefreshEntityLookMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->look.deserialize(input);
}

void GameContextRefreshEntityLookMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}
