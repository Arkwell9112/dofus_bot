#ifndef FIGHTTEAMMEMBERTAXCOLLECTORINFORMATIONS_H
#define FIGHTTEAMMEMBERTAXCOLLECTORINFORMATIONS_H

#include "TaxCollectorInformations.h"
#include "FightTeamMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberTaxCollectorInformations : public FightTeamMemberInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    unsigned int level = 0;
    unsigned int guildId = 0;
    double uid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _guildIdFunc(CustomDataInput *input);

    void _uidFunc(CustomDataInput *input);
};

#endif