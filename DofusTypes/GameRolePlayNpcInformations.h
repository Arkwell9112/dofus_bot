#ifndef GAMEROLEPLAYNPCINFORMATIONS_H
#define GAMEROLEPLAYNPCINFORMATIONS_H

#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayNpcInformations : public GameRolePlayActorInformations {
public:
    unsigned int npcId = 0;
    bool sex = false;
    unsigned int specialArtworkId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _npcIdFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _specialArtworkIdFunc(CustomDataInput *input);
};

#endif