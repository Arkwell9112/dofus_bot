#ifndef FIGHTRESULTPVPDATA_H
#define FIGHTRESULTPVPDATA_H

#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultPvpData : public FightResultAdditionalData {
public:
    unsigned int grade = 0;
    unsigned int minHonorForGrade = 0;
    unsigned int maxHonorForGrade = 0;
    unsigned int honor = 0;
    int honorDelta = 0;

    void deserialize(CustomDataInput *input);

private:
    void _gradeFunc(CustomDataInput *input);

    void _minHonorForGradeFunc(CustomDataInput *input);

    void _maxHonorForGradeFunc(CustomDataInput *input);

    void _honorFunc(CustomDataInput *input);

    void _honorDeltaFunc(CustomDataInput *input);
};

#endif