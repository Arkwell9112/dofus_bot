#include "JobExperience.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobExperience::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
    this->_jobLevelFunc(input);
    this->_jobXPFunc(input);
    this->_jobXpLevelFloorFunc(input);
    this->_jobXpNextLevelFloorFunc(input);
}

void JobExperience::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobExperience::_jobLevelFunc(CustomDataInput *input) {
    this->jobLevel = input->readUnsignedByte();
    if (this->jobLevel < 0 || this->jobLevel > 255) {

    }
}

void JobExperience::_jobXPFunc(CustomDataInput *input) {
    this->jobXP = input->readVarUhLong();
    if (this->jobXP < 0 || this->jobXP > 9007199254740990) {

    }
}

void JobExperience::_jobXpLevelFloorFunc(CustomDataInput *input) {
    this->jobXpLevelFloor = input->readVarUhLong();
    if (this->jobXpLevelFloor < 0 || this->jobXpLevelFloor > 9007199254740990) {

    }
}

void JobExperience::_jobXpNextLevelFloorFunc(CustomDataInput *input) {
    this->jobXpNextLevelFloor = input->readVarUhLong();
    if (this->jobXpNextLevelFloor < 0 || this->jobXpNextLevelFloor > 9007199254740990) {

    }
}
