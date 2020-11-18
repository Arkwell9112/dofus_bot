#include "PartyRefuseInvitationNotificationMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyRefuseInvitationNotificationMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_guestIdFunc(input);
}

void PartyRefuseInvitationNotificationMessage::_guestIdFunc(CustomDataInput *input) {
    this->guestId = input->readVarUhLong();
    if (this->guestId < 0 || this->guestId > 9007199254740990) {

    }
}
