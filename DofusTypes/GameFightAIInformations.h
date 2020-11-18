#ifndef GAMEFIGHTAIINFORMATIONS_H
#define GAMEFIGHTAIINFORMATIONS_H

#include "GameFightFighterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightAIInformations : public GameFightFighterInformations {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif