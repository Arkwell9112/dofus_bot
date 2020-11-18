#include "GuildFactsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFactsRequestMessage::deserialize(CustomDataInput *input) {
    this->_guildIdFunc(input);
}

void GuildFactsRequestMessage::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}
