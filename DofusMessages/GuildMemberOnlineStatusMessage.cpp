#include "GuildMemberOnlineStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

void GuildMemberOnlineStatusMessage::deserialize(CustomDataInput *input) {
    this->_memberIdFunc(input);
    this->_onlineFunc(input);
}

void GuildMemberOnlineStatusMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void GuildMemberOnlineStatusMessage::_onlineFunc(CustomDataInput *input) {
    this->online = input->readBoolean();
}
