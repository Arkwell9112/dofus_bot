#ifndef FIGHTTEAMMEMBERMONSTERINFORMATIONS_H
#define FIGHTTEAMMEMBERMONSTERINFORMATIONS_H

#include "FightTeamMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberMonsterInformations : public FightTeamMemberInformations {
public:
    int monsterId = 0;
    unsigned int grade = 0;

    void deserialize(CustomDataInput *input);

private:
    void _monsterIdFunc(CustomDataInput *input);

    void _gradeFunc(CustomDataInput *input);
};

#endif