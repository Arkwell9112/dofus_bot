#ifndef FIGHTRESULTTAXCOLLECTORLISTENTRY_H
#define FIGHTRESULTTAXCOLLECTORLISTENTRY_H

#include "GuildInformations.h"
#include "FightResultFighterListEntry.h"
#include "BasicGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultTaxCollectorListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;
    BasicGuildInformations guildInfo;
    int experienceForGuild = 0;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);

    void _experienceForGuildFunc(CustomDataInput *input);
};

#endif