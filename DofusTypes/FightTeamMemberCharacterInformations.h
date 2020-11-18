#ifndef FIGHTTEAMMEMBERCHARACTERINFORMATIONS_H
#define FIGHTTEAMMEMBERCHARACTERINFORMATIONS_H

#include "FightTeamMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberCharacterInformations : public FightTeamMemberInformations {
public:
    std::string name;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif