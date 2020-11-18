#include "GuildCreationValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildCreationValidMessage::deserialize(CustomDataInput *input) {
    this->_guildNameFunc(input);
    this->guildEmblem.deserialize(input);
}

void GuildCreationValidMessage::_guildNameFunc(CustomDataInput *input) {
    this->guildName = input->readUTF();
}
