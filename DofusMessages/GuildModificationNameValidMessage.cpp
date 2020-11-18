#include "GuildModificationNameValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildModificationNameValidMessage::deserialize(CustomDataInput *input) {
    this->_guildNameFunc(input);
}

void GuildModificationNameValidMessage::_guildNameFunc(CustomDataInput *input) {
    this->guildName = input->readUTF();
}
