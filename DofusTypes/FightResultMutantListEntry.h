#ifndef FIGHTRESULTMUTANTLISTENTRY_H
#define FIGHTRESULTMUTANTLISTENTRY_H

#include "FightResultFighterListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultMutantListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);
};

#endif