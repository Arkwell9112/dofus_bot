#ifndef BASESPAWNMONSTERINFORMATION_H
#define BASESPAWNMONSTERINFORMATION_H

#include "SpawnInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BaseSpawnMonsterInformation : public SpawnInformation {
public:
    unsigned int creatureGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creatureGenericIdFunc(CustomDataInput *input);
};

#endif