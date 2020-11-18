#ifndef GAMEFIGHTENTITYINFORMATION_H
#define GAMEFIGHTENTITYINFORMATION_H

#include "GameFightFighterInformations.h"
#include "EntityInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightEntityInformation : public GameFightFighterInformations {
public:
    unsigned int entityModelId = 0;
    unsigned int level = 0;
    double masterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _entityModelIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _masterIdFunc(CustomDataInput *input);
};

#endif