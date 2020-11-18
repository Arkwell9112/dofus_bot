#include "GuildMemberLeavingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

void GuildMemberLeavingMessage::deserialize(CustomDataInput *input) {
    this->_kickedFunc(input);
    this->_memberIdFunc(input);
}

void GuildMemberLeavingMessage::_kickedFunc(CustomDataInput *input) {
    this->kicked = input->readBoolean();
}

void GuildMemberLeavingMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}
