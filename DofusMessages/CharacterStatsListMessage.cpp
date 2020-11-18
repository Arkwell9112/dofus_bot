#include "CharacterStatsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterStatsListMessage::deserialize(CustomDataInput *input) {
    this->stats.deserialize(input);
}