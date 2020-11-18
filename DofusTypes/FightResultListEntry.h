#ifndef FIGHTRESULTLISTENTRY_H
#define FIGHTRESULTLISTENTRY_H

#include "FightLoot.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightResultListEntry : public DeserializeInterface {
public:
    unsigned int outcome = 0;
    unsigned int wave = 0;
    FightLoot rewards;

    void deserialize(CustomDataInput *input);

private:
    void _outcomeFunc(CustomDataInput *input);

    void _waveFunc(CustomDataInput *input);
};

#endif