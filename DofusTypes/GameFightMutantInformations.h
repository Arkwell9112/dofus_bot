#ifndef GAMEFIGHTMUTANTINFORMATIONS_H
#define GAMEFIGHTMUTANTINFORMATIONS_H

#include "GameFightFighterNamedInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightMutantInformations : public GameFightFighterNamedInformations {
public:
    unsigned int powerLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _powerLevelFunc(CustomDataInput *input);
};

#endif