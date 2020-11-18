#ifndef GAMEFIGHTFIGHTERMONSTERLIGHTINFORMATIONS_H
#define GAMEFIGHTFIGHTERMONSTERLIGHTINFORMATIONS_H

#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterMonsterLightInformations : public GameFightFighterLightInformations {
public:
    unsigned int creatureGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _creatureGenericIdFunc(CustomDataInput *input);
};

#endif