#include "GuildFactsErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFactsErrorMessage::deserialize(CustomDataInput *input) {
    this->_guildIdFunc(input);
}

void GuildFactsErrorMessage::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}
