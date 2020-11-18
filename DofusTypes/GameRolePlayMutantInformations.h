#ifndef GAMEROLEPLAYMUTANTINFORMATIONS_H
#define GAMEROLEPLAYMUTANTINFORMATIONS_H

#include "GameRolePlayHumanoidInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayMutantInformations : public GameRolePlayHumanoidInformations {
public:
    unsigned int monsterId = 0;
    int powerLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _monsterIdFunc(CustomDataInput *input);

    void _powerLevelFunc(CustomDataInput *input);
};

#endif