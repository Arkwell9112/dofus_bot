#include "PartyAcceptInvitationMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyAcceptInvitationMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}