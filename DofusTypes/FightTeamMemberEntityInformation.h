#ifndef FIGHTTEAMMEMBERENTITYINFORMATION_H
#define FIGHTTEAMMEMBERENTITYINFORMATION_H

#include "FightTeamMemberInformations.h"
#include "EntityInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberEntityInformation : public FightTeamMemberInformations {
public:
    unsigned int entityModelId = 0;
    unsigned int level = 0;
    double masterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _entityModelIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _masterIdFunc(CustomDataInput *input);
};

#endif