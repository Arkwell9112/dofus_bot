#include "PartyNewGuestMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyNewGuestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyEventMessage::deserialize(input);
    this->guest.deserialize(input);
}