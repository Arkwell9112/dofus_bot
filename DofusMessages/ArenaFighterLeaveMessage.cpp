#include "ArenaFighterLeaveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ArenaFighterLeaveMessage::deserialize(CustomDataInput *input) {
    this->leaver.deserialize(input);
}