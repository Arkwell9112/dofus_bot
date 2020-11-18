#ifndef GAMEFIGHTMINIMALSTATSPREPARATION_H
#define GAMEFIGHTMINIMALSTATSPREPARATION_H

#include "GameFightMinimalStats.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightMinimalStatsPreparation : public GameFightMinimalStats {
public:
    unsigned int initiative = 0;

    void deserialize(CustomDataInput *input);

private:
    void _initiativeFunc(CustomDataInput *input);
};

#endif