#ifndef GAMECONTEXTSUMMONSINFORMATION_H
#define GAMECONTEXTSUMMONSINFORMATION_H

#include "SpawnInformation.h"
#include "GameFightMinimalStats.h"
#include "GameContextBasicSpawnInformation.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextSummonsInformation : public DeserializeInterface {
public:
    SpawnInformation spawnInformation;
    unsigned int wave = 0;
    EntityLook look;
    GameFightMinimalStats stats;
    std::vector<GameContextBasicSpawnInformation> summons;

    void deserialize(CustomDataInput *input);

private:
    void _waveFunc(CustomDataInput *input);

    void _summonsFunc(CustomDataInput *input);
};

#endif