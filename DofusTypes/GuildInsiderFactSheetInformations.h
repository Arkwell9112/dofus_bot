#ifndef GUILDINSIDERFACTSHEETINFORMATIONS_H
#define GUILDINSIDERFACTSHEETINFORMATIONS_H

#include "GuildFactSheetInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInsiderFactSheetInformations : public GuildFactSheetInformations {
public:
    std::string leaderName;
    unsigned int nbConnectedMembers = 0;
    unsigned int nbTaxCollectors = 0;
    unsigned int lastActivity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _leaderNameFunc(CustomDataInput *input);

    void _nbConnectedMembersFunc(CustomDataInput *input);

    void _nbTaxCollectorsFunc(CustomDataInput *input);

    void _lastActivityFunc(CustomDataInput *input);
};

#endif