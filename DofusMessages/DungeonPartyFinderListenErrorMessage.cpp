#include "DungeonPartyFinderListenErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonPartyFinderListenErrorMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
}

void DungeonPartyFinderListenErrorMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
