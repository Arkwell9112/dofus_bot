#include "PartyInvitationDetailsRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationDetailsRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}