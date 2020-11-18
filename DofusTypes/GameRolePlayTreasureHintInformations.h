#ifndef GAMEROLEPLAYTREASUREHINTINFORMATIONS_H
#define GAMEROLEPLAYTREASUREHINTINFORMATIONS_H

#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayTreasureHintInformations : public GameRolePlayActorInformations {
public:
    unsigned int npcId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _npcIdFunc(CustomDataInput *input);
};

#endif