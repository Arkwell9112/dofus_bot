#include "PartyRefuseInvitationMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyRefuseInvitationMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}