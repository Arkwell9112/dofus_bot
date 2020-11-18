#include "BreachInvitationAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachInvitationAnswerMessage::deserialize(CustomDataInput *input) {
    this->_acceptFunc(input);
}

void BreachInvitationAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
