#include "GuildMemberSetWarnOnConnectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

void GuildMemberSetWarnOnConnectionMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void GuildMemberSetWarnOnConnectionMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
