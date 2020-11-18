#ifndef GUILDFACTSHEETINFORMATIONS_H
#define GUILDFACTSHEETINFORMATIONS_H

#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFactSheetInformations : public GuildInformations {
public:
    double leaderId = 0;
    unsigned int nbMembers = 0;

    void deserialize(CustomDataInput *input);

private:
    void _leaderIdFunc(CustomDataInput *input);

    void _nbMembersFunc(CustomDataInput *input);
};

#endif