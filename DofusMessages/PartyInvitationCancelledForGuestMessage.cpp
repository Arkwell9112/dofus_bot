#include "PartyInvitationCancelledForGuestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationCancelledForGuestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_cancelerIdFunc(input);
}

void PartyInvitationCancelledForGuestMessage::_cancelerIdFunc(CustomDataInput *input) {
    this->cancelerId = input->readVarUhLong();
    if (this->cancelerId < 0 || this->cancelerId > 9007199254740990) {

    }
}
