#include "FighterStatsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FighterStatsListMessage::deserialize(CustomDataInput *input) {
    this->stats.deserialize(input);
}