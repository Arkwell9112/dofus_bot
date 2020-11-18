#ifndef FIGHTRESULTEXPERIENCEDATA_H
#define FIGHTRESULTEXPERIENCEDATA_H

#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultExperienceData : public FightResultAdditionalData {
public:
    double experience = 0;
    bool showExperience = false;
    double experienceLevelFloor = 0;
    bool showExperienceLevelFloor = false;
    double experienceNextLevelFloor = 0;
    bool showExperienceNextLevelFloor = false;
    double experienceFightDelta = 0;
    bool showExperienceFightDelta = false;
    double experienceForGuild = 0;
    bool showExperienceForGuild = false;
    double experienceForMount = 0;
    bool showExperienceForMount = false;
    bool isIncarnationExperience = false;
    unsigned int rerollExperienceMul = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _experienceLevelFloorFunc(CustomDataInput *input);

    void _experienceNextLevelFloorFunc(CustomDataInput *input);

    void _experienceFightDeltaFunc(CustomDataInput *input);

    void _experienceForGuildFunc(CustomDataInput *input);

    void _experienceForMountFunc(CustomDataInput *input);

    void _rerollExperienceMulFunc(CustomDataInput *input);
};

#endif