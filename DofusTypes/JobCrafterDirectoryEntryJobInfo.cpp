#include "JobCrafterDirectoryEntryJobInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobCrafterDirectoryEntryJobInfo::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
    this->_jobLevelFunc(input);
    this->_freeFunc(input);
    this->_minLevelFunc(input);
}

void JobCrafterDirectoryEntryJobInfo::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobCrafterDirectoryEntryJobInfo::_jobLevelFunc(CustomDataInput *input) {
    this->jobLevel = input->readUnsignedByte();
    if (this->jobLevel < 1 || this->jobLevel > 200) {

    }
}

void JobCrafterDirectoryEntryJobInfo::_freeFunc(CustomDataInput *input) {
    this->free = input->readBoolean();
}

void JobCrafterDirectoryEntryJobInfo::_minLevelFunc(CustomDataInput *input) {
    this->minLevel = input->readUnsignedByte();
    if (this->minLevel < 0 || this->minLevel > 255) {

    }
}
