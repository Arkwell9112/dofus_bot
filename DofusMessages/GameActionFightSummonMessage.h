#ifndef GAMEACTIONFIGHTSUMMONMESSAGE_H
#define GAMEACTIONFIGHTSUMMONMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

#include <string>
#include <vector>

class GameActionFightSummonMessage : public AbstractGameActionMessage {
public:
    std::vector<GameFightFighterInformations> summons;

    void deserialize(CustomDataInput *input);

private:
    void _summonsFunc(CustomDataInput *input);
};

#endif