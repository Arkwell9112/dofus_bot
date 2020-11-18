#ifndef FIGHTRESULTPLAYERLISTENTRY_H
#define FIGHTRESULTPLAYERLISTENTRY_H

#include "FightResultFighterListEntry.h"
#include "FightResultAdditionalData.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultPlayerListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;
    std::vector<FightResultAdditionalData> additional;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);

    void _additionalFunc(CustomDataInput *input);
};

#endif