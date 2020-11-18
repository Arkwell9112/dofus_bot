#include "FightResultPvpData.h"
#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultPvpData::deserialize(CustomDataInput *input) {
    FightResultAdditionalData::deserialize(input);
    this->_gradeFunc(input);
    this->_minHonorForGradeFunc(input);
    this->_maxHonorForGradeFunc(input);
    this->_honorFunc(input);
    this->_honorDeltaFunc(input);
}

void FightResultPvpData::_gradeFunc(CustomDataInput *input) {
    this->grade = input->readUnsignedByte();
    if (this->grade < 0 || this->grade > 255) {

    }
}

void FightResultPvpData::_minHonorForGradeFunc(CustomDataInput *input) {
    this->minHonorForGrade = input->readVarUhShort();
    if (this->minHonorForGrade < 0 || this->minHonorForGrade > 20000) {

    }
}

void FightResultPvpData::_maxHonorForGradeFunc(CustomDataInput *input) {
    this->maxHonorForGrade = input->readVarUhShort();
    if (this->maxHonorForGrade < 0 || this->maxHonorForGrade > 20000) {

    }
}

void FightResultPvpData::_honorFunc(CustomDataInput *input) {
    this->honor = input->readVarUhShort();
    if (this->honor < 0 || this->honor > 20000) {

    }
}

void FightResultPvpData::_honorDeltaFunc(CustomDataInput *input) {
    this->honorDelta = input->readVarShort();
}
