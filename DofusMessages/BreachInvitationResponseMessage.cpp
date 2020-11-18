#include "BreachInvitationResponseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachInvitationResponseMessage::deserialize(CustomDataInput *input) {
    this->guest.deserialize(input);
    this->_acceptFunc(input);
}

void BreachInvitationResponseMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
