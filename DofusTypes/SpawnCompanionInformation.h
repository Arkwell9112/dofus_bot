#ifndef SPAWNCOMPANIONINFORMATION_H
#define SPAWNCOMPANIONINFORMATION_H

#include "SpawnInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpawnCompanionInformation : public SpawnInformation {
public:
    unsigned int modelId = 0;
    unsigned int level = 0;
    double summonerId = 0;
    double ownerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _modelIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _summonerIdFunc(CustomDataInput *input);

    void _ownerIdFunc(CustomDataInput *input);
};

#endif