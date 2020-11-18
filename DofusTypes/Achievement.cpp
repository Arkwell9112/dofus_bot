#include "AchievementStartedObjective.h"
#include "AchievementObjective.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void Achievement::deserialize(CustomDataInput *input) {
    AchievementObjective _item2;
    AchievementStartedObjective _item3;
    this->_idFunc(input);
    unsigned int _finishedObjectiveLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _finishedObjectiveLen; _i2++) {
        _item2.deserialize(input);
        this->finishedObjective.push_back(_item2);
    }
    unsigned int _startedObjectivesLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _startedObjectivesLen; _i3++) {
        _item3.deserialize(input);
        this->startedObjectives.push_back(_item3);
    }
}

void Achievement::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}
