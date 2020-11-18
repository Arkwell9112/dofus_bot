#include "FightResultExperienceData.h"
#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultExperienceData::deserialize(CustomDataInput *input) {
    FightResultAdditionalData::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_experienceFunc(input);
    this->_experienceLevelFloorFunc(input);
    this->_experienceNextLevelFloorFunc(input);
    this->_experienceFightDeltaFunc(input);
    this->_experienceForGuildFunc(input);
    this->_experienceForMountFunc(input);
    this->_rerollExperienceMulFunc(input);
}

void FightResultExperienceData::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->showExperience = BooleanByteWrapper::getFlag(_box0, 0);
    this->showExperienceLevelFloor = BooleanByteWrapper::getFlag(_box0, 1);
    this->showExperienceNextLevelFloor = BooleanByteWrapper::getFlag(_box0, 2);
    this->showExperienceFightDelta = BooleanByteWrapper::getFlag(_box0, 3);
    this->showExperienceForGuild = BooleanByteWrapper::getFlag(_box0, 4);
    this->showExperienceForMount = BooleanByteWrapper::getFlag(_box0, 5);
    this->isIncarnationExperience = BooleanByteWrapper::getFlag(_box0, 6);
}

void FightResultExperienceData::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void FightResultExperienceData::_experienceLevelFloorFunc(CustomDataInput *input) {
    this->experienceLevelFloor = input->readVarUhLong();
    if (this->experienceLevelFloor < 0 || this->experienceLevelFloor > 9007199254740990) {

    }
}

void FightResultExperienceData::_experienceNextLevelFloorFunc(CustomDataInput *input) {
    this->experienceNextLevelFloor = input->readVarUhLong();
    if (this->experienceNextLevelFloor < 0 || this->experienceNextLevelFloor > 9007199254740990) {

    }
}

void FightResultExperienceData::_experienceFightDeltaFunc(CustomDataInput *input) {
    this->experienceFightDelta = input->readVarUhLong();
    if (this->experienceFightDelta < 0 || this->experienceFightDelta > 9007199254740990) {

    }
}

void FightResultExperienceData::_experienceForGuildFunc(CustomDataInput *input) {
    this->experienceForGuild = input->readVarUhLong();
    if (this->experienceForGuild < 0 || this->experienceForGuild > 9007199254740990) {

    }
}

void FightResultExperienceData::_experienceForMountFunc(CustomDataInput *input) {
    this->experienceForMount = input->readVarUhLong();
    if (this->experienceForMount < 0 || this->experienceForMount > 9007199254740990) {

    }
}

void FightResultExperienceData::_rerollExperienceMulFunc(CustomDataInput *input) {
    this->rerollExperienceMul = input->readByte();
    if (this->rerollExperienceMul < 0) {

    }
}
