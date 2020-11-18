#include "GuildMemberWarnOnConnectionStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

void GuildMemberWarnOnConnectionStateMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void GuildMemberWarnOnConnectionStateMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
