#include "PartyInvitationRequestMessage.h"
#include "PartyInvitationArenaRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationArenaRequestMessage::deserialize(CustomDataInput *input) {
    PartyInvitationRequestMessage::deserialize(input);
}