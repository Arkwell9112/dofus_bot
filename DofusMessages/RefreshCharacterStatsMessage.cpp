#include "RefreshCharacterStatsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void RefreshCharacterStatsMessage::deserialize(CustomDataInput *input) {
    this->_fighterIdFunc(input);
    this->stats.deserialize(input);
}

void RefreshCharacterStatsMessage::_fighterIdFunc(CustomDataInput *input) {
    this->fighterId = input->readDouble();
    if (this->fighterId < -9007199254740990 || this->fighterId > 9007199254740990) {

    }
}
