#include "PartyLeaveMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyLeaveMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}