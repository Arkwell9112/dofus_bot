#include "GuildInvitationByNameMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInvitationByNameMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
}

void GuildInvitationByNameMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
