#include "GameFightUpdateTeamMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightUpdateTeamMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->team.deserialize(input);
}

void GameFightUpdateTeamMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
