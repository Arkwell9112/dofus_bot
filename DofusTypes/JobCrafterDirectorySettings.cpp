#include "JobCrafterDirectorySettings.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectorySettings::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
    this->_minLevelFunc(input);
    this->_freeFunc(input);
}

void JobCrafterDirectorySettings::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobCrafterDirectorySettings::_minLevelFunc(CustomDataInput *input) {
    this->minLevel = input->readUnsignedByte();
    if (this->minLevel < 0 || this->minLevel > 255) {

    }
}

void JobCrafterDirectorySettings::_freeFunc(CustomDataInput *input) {
    this->free = input->readBoolean();
}
