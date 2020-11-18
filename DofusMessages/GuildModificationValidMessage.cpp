#include "GuildModificationValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildModificationValidMessage::deserialize(CustomDataInput *input) {
    this->_guildNameFunc(input);
    this->guildEmblem.deserialize(input);
}

void GuildModificationValidMessage::_guildNameFunc(CustomDataInput *input) {
    this->guildName = input->readUTF();
}
