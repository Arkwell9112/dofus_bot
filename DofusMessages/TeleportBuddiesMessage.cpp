#include "TeleportBuddiesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportBuddiesMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
}

void TeleportBuddiesMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
