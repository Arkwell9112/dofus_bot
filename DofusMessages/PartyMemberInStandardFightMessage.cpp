#include "PartyMemberInStandardFightMessage.h"
#include "AbstractPartyMemberInFightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberInStandardFightMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMemberInFightMessage::deserialize(input);
    this->fightMap.deserialize(input);
}