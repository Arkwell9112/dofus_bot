#include "JobCrafterDirectoryListRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryListRequestMessage::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
}

void JobCrafterDirectoryListRequestMessage::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}
