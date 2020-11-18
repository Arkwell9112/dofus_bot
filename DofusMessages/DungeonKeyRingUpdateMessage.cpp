#include "DungeonKeyRingUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonKeyRingUpdateMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
    this->_availableFunc(input);
}

void DungeonKeyRingUpdateMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void DungeonKeyRingUpdateMessage::_availableFunc(CustomDataInput *input) {
    this->available = input->readBoolean();
}
