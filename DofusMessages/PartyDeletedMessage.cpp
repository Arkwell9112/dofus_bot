#include "PartyDeletedMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyDeletedMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}