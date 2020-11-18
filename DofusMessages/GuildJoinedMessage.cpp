#include "GuildJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildJoinedMessage::deserialize(CustomDataInput *input) {
    this->guildInfo.deserialize(input);
    this->_memberRightsFunc(input);
}

void GuildJoinedMessage::_memberRightsFunc(CustomDataInput *input) {
    this->memberRights = input->readVarUhInt();
    if (this->memberRights < 0) {

    }
}
