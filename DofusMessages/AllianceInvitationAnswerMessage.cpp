#include "AllianceInvitationAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceInvitationAnswerMessage::deserialize(CustomDataInput *input) {
    this->_acceptFunc(input);
}

void AllianceInvitationAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
