#include "DungeonPartyFinderListenRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonPartyFinderListenRequestMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
}

void DungeonPartyFinderListenRequestMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
