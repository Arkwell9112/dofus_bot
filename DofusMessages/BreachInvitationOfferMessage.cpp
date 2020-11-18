#include "BreachInvitationOfferMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachInvitationOfferMessage::deserialize(CustomDataInput *input) {
    this->host.deserialize(input);
    this->_timeLeftBeforeCancelFunc(input);
}

void BreachInvitationOfferMessage::_timeLeftBeforeCancelFunc(CustomDataInput *input) {
    this->timeLeftBeforeCancel = input->readVarUhInt();
    if (this->timeLeftBeforeCancel < 0) {

    }
}
