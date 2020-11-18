#include "AllianceInvitationStateRecruterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInvitationStateRecruterMessage::deserialize(CustomDataInput *input) {
    this->_recrutedNameFunc(input);
    this->_invitationStateFunc(input);
}

void AllianceInvitationStateRecruterMessage::_recrutedNameFunc(CustomDataInput *input) {
    this->recrutedName = input->readUTF();
}

void AllianceInvitationStateRecruterMessage::_invitationStateFunc(CustomDataInput *input) {
    this->invitationState = input->readByte();
    if (this->invitationState < 0) {

    }
}
