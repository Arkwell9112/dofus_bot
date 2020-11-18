#ifndef GAMEFIGHTFIGHTERTAXCOLLECTORLIGHTINFORMATIONS_H
#define GAMEFIGHTFIGHTERTAXCOLLECTORLIGHTINFORMATIONS_H

#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterTaxCollectorLightInformations : public GameFightFighterLightInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _firstNameIdFunc(CustomDataInput *input);

    void _lastNameIdFunc(CustomDataInput *input);
};

#endif