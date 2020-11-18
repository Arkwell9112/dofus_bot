#include "JobCrafterDirectoryRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryRemoveMessage::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
    this->_playerIdFunc(input);
}

void JobCrafterDirectoryRemoveMessage::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobCrafterDirectoryRemoveMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
