#ifndef GAMECONTEXTBASICSPAWNINFORMATION_H
#define GAMECONTEXTBASICSPAWNINFORMATION_H

#include "SpawnInformation.h"
#include "GameContextActorPositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextBasicSpawnInformation : public DeserializeInterface {
public:
    unsigned int teamId = 2;
    bool alive = false;
    GameContextActorPositionInformations informations;

    void deserialize(CustomDataInput *input);

private:
    void _teamIdFunc(CustomDataInput *input);

    void _aliveFunc(CustomDataInput *input);
};

#endif