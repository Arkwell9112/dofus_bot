#ifndef GAMECONTEXTACTORINFORMATIONS_H
#define GAMECONTEXTACTORINFORMATIONS_H

#include "GameContextActorPositionInformations.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextActorInformations : public GameContextActorPositionInformations {
public:
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
};

#endif