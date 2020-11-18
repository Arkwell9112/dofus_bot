#include "PartyCancelInvitationNotificationMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyCancelInvitationNotificationMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_cancelerIdFunc(input);
    this->_guestIdFunc(input);
}

void PartyCancelInvitationNotificationMessage::_cancelerIdFunc(CustomDataInput *input) {
    this->cancelerId = input->readVarUhLong();
    if (this->cancelerId < 0 || this->cancelerId > 9007199254740990) {

    }
}

void PartyCancelInvitationNotificationMessage::_guestIdFunc(CustomDataInput *input) {
    this->guestId = input->readVarUhLong();
    if (this->guestId < 0 || this->guestId > 9007199254740990) {

    }
}
