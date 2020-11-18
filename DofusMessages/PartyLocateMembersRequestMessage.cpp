#include "PartyLocateMembersRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyLocateMembersRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}