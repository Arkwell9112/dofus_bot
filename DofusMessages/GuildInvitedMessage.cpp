#include "GuildInvitedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInvitedMessage::deserialize(CustomDataInput *input) {
    this->_recruterIdFunc(input);
    this->_recruterNameFunc(input);
    this->guildInfo.deserialize(input);
}

void GuildInvitedMessage::_recruterIdFunc(CustomDataInput *input) {
    this->recruterId = input->readVarUhLong();
    if (this->recruterId < 0 || this->recruterId > 9007199254740990) {

    }
}

void GuildInvitedMessage::_recruterNameFunc(CustomDataInput *input) {
    this->recruterName = input->readUTF();
}
