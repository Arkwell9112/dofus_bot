#include "GuildInvitationStateRecrutedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInvitationStateRecrutedMessage::deserialize(CustomDataInput *input) {
    this->_invitationStateFunc(input);
}

void GuildInvitationStateRecrutedMessage::_invitationStateFunc(CustomDataInput *input) {
    this->invitationState = input->readByte();
    if (this->invitationState < 0) {

    }
}
