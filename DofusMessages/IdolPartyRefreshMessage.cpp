#include "IdolPartyRefreshMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Idol.h"

void IdolPartyRefreshMessage::deserialize(CustomDataInput *input) {
    this->partyIdol.deserialize(input);
}