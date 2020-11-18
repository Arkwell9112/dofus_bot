#ifndef GAMEFIGHTFIGHTERENTITYLIGHTINFORMATION_H
#define GAMEFIGHTFIGHTERENTITYLIGHTINFORMATION_H

#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterEntityLightInformation : public GameFightFighterLightInformations {
public:
    unsigned int entityModelId = 0;
    double masterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _entityModelIdFunc(CustomDataInput *input);

    void _masterIdFunc(CustomDataInput *input);
};

#endif