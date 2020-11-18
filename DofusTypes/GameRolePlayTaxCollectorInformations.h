#ifndef GAMEROLEPLAYTAXCOLLECTORINFORMATIONS_H
#define GAMEROLEPLAYTAXCOLLECTORINFORMATIONS_H

#include "TaxCollectorStaticInformations.h"
#include "TaxCollectorInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayTaxCollectorInformations : public GameRolePlayActorInformations {
public:
    TaxCollectorStaticInformations identification;
    unsigned int guildLevel = 0;
    int taxCollectorAttack = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildLevelFunc(CustomDataInput *input);

    void _taxCollectorAttackFunc(CustomDataInput *input);
};

#endif