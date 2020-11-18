#ifndef GAMEFIGHTFIGHTERINFORMATIONS_H
#define GAMEFIGHTFIGHTERINFORMATIONS_H

#include "SpawnInformation.h"
#include "GameFightMinimalStats.h"
#include "GameContextBasicSpawnInformation.h"
#include "GameContextActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterInformations : public GameContextActorInformations {
public:
    GameContextBasicSpawnInformation spawnInfo;
    unsigned int wave = 0;
    GameFightMinimalStats stats;
    std::vector<unsigned int> previousPositions;

    void deserialize(CustomDataInput *input);

private:
    void _waveFunc(CustomDataInput *input);

    void _previousPositionsFunc(CustomDataInput *input);
};

#endif