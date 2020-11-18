#ifndef GAMEFIGHTFIGHTERNAMEDLIGHTINFORMATIONS_H
#define GAMEFIGHTFIGHTERNAMEDLIGHTINFORMATIONS_H

#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterNamedLightInformations : public GameFightFighterLightInformations {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif