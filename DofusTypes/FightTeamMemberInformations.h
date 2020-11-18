#ifndef FIGHTTEAMMEMBERINFORMATIONS_H
#define FIGHTTEAMMEMBERINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberInformations : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif