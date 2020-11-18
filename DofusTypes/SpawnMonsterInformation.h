#ifndef SPAWNMONSTERINFORMATION_H
#define SPAWNMONSTERINFORMATION_H

#include "BaseSpawnMonsterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpawnMonsterInformation : public BaseSpawnMonsterInformation {
public:
    unsigned int creatureGrade = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creatureGradeFunc(CustomDataInput *input);
};

#endif