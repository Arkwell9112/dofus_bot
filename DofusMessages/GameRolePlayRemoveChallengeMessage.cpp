#include "GameRolePlayRemoveChallengeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayRemoveChallengeMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
}

void GameRolePlayRemoveChallengeMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
