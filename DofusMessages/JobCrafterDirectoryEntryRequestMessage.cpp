#include "JobCrafterDirectoryEntryRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryEntryRequestMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
}

void JobCrafterDirectoryEntryRequestMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
