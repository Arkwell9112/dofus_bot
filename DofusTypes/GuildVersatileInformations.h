#ifndef GUILDVERSATILEINFORMATIONS_H
#define GUILDVERSATILEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildVersatileInformations : public DeserializeInterface {
public:
    unsigned int guildId = 0;
    double leaderId = 0;
    unsigned int guildLevel = 0;
    unsigned int nbMembers = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildIdFunc(CustomDataInput *input);

    void _leaderIdFunc(CustomDataInput *input);

    void _guildLevelFunc(CustomDataInput *input);

    void _nbMembersFunc(CustomDataInput *input);
};

#endif