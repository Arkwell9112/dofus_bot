#ifndef CHARACTERMINIMALALLIANCEINFORMATIONS_H
#define CHARACTERMINIMALALLIANCEINFORMATIONS_H

#include "GuildInformations.h"
#include "CharacterMinimalGuildInformations.h"
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalAllianceInformations : public CharacterMinimalGuildInformations {
public:
    BasicAllianceInformations alliance;

    void deserialize(CustomDataInput *input);

private:
};

#endif