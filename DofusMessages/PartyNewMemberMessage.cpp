#include "PartyUpdateMessage.h"
#include "PartyNewMemberMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyNewMemberMessage::deserialize(CustomDataInput *input) {
    PartyUpdateMessage::deserialize(input);
}