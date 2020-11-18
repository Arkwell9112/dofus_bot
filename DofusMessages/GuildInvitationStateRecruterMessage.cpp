#include "GuildInvitationStateRecruterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInvitationStateRecruterMessage::deserialize(CustomDataInput *input) {
    this->_recrutedNameFunc(input);
    this->_invitationStateFunc(input);
}

void GuildInvitationStateRecruterMessage::_recrutedNameFunc(CustomDataInput *input) {
    this->recrutedName = input->readUTF();
}

void GuildInvitationStateRecruterMessage::_invitationStateFunc(CustomDataInput *input) {
    this->invitationState = input->readByte();
    if (this->invitationState < 0) {

    }
}
