#include "GuildFightPlayersEnemyRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFightPlayersEnemyRemoveMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_playerIdFunc(input);
}

void GuildFightPlayersEnemyRemoveMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readDouble();
    if (this->fightId < 0 || this->fightId > 9007199254740990) {

    }
}

void GuildFightPlayersEnemyRemoveMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
