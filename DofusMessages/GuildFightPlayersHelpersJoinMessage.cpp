#include "GuildFightPlayersHelpersJoinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFightPlayersHelpersJoinMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->playerInfo.deserialize(input);
}

void GuildFightPlayersHelpersJoinMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readDouble();
    if (this->fightId < 0 || this->fightId > 9007199254740990) {

    }
}
