#include "PartyLeaveRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyLeaveRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}