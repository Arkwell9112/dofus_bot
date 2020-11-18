#ifndef GUILDINALLIANCEVERSATILEINFORMATIONS_H
#define GUILDINALLIANCEVERSATILEINFORMATIONS_H

#include "GuildVersatileInformations.h"
#include "AllianceVersatileInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInAllianceVersatileInformations : public GuildVersatileInformations {
public:
    unsigned int allianceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _allianceIdFunc(CustomDataInput *input);
};

#endif