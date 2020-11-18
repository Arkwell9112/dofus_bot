#include "GameFightJoinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightJoinRequestMessage::deserialize(CustomDataInput *input) {
    this->_fighterIdFunc(input);
    this->_fightIdFunc(input);
}

void GameFightJoinRequestMessage::_fighterIdFunc(CustomDataInput *input) {
    this->fighterId = input->readDouble();
    if (this->fighterId < -9007199254740990 || this->fighterId > 9007199254740990) {

    }
}

void GameFightJoinRequestMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
