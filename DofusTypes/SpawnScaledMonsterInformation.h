#ifndef SPAWNSCALEDMONSTERINFORMATION_H
#define SPAWNSCALEDMONSTERINFORMATION_H

#include "SpawnMonsterInformation.h"
#include "BaseSpawnMonsterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpawnScaledMonsterInformation : public BaseSpawnMonsterInformation {
public:
    unsigned int creatureLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creatureLevelFunc(CustomDataInput *input);
};

#endif