#ifndef GAMEROLEPLAYACTORINFORMATIONS_H
#define GAMEROLEPLAYACTORINFORMATIONS_H

#include "GameContextActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayActorInformations : public GameContextActorInformations {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif