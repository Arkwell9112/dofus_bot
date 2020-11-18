#ifndef FIGHTRESULTFIGHTERLISTENTRY_H
#define FIGHTRESULTFIGHTERLISTENTRY_H

#include "FightResultListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultFighterListEntry : public FightResultListEntry {
public:
    double id = 0;
    bool alive = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _aliveFunc(CustomDataInput *input);
};

#endif