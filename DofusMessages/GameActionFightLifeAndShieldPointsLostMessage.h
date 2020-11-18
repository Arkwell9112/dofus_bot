#ifndef GAMEACTIONFIGHTLIFEANDSHIELDPOINTSLOSTMESSAGE_H
#define GAMEACTIONFIGHTLIFEANDSHIELDPOINTSLOSTMESSAGE_H

#include "GameActionFightLifePointsLostMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightLifeAndShieldPointsLostMessage : public GameActionFightLifePointsLostMessage {
public:
    unsigned int shieldLoss = 0;

    void deserialize(CustomDataInput *input);

private:
    void _shieldLossFunc(CustomDataInput *input);
};

#endif