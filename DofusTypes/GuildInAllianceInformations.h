#ifndef GUILDINALLIANCEINFORMATIONS_H
#define GUILDINALLIANCEINFORMATIONS_H

#include "GuildInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInAllianceInformations : public GuildInformations {
public:
    unsigned int nbMembers = 0;
    unsigned int joinDate = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nbMembersFunc(CustomDataInput *input);

    void _joinDateFunc(CustomDataInput *input);
};

#endif