#include "AllianceInvitationStateRecrutedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInvitationStateRecrutedMessage::deserialize(CustomDataInput *input) {
    this->_invitationStateFunc(input);
}

void AllianceInvitationStateRecrutedMessage::_invitationStateFunc(CustomDataInput *input) {
    this->invitationState = input->readByte();
    if (this->invitationState < 0) {

    }
}
