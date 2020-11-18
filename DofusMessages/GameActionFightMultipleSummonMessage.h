#ifndef GAMEACTIONFIGHTMULTIPLESUMMONMESSAGE_H
#define GAMEACTIONFIGHTMULTIPLESUMMONMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameContextSummonsInformation.h"

#include <string>
#include <vector>

class GameActionFightMultipleSummonMessage : public AbstractGameActionMessage {
public:
    std::vector<GameContextSummonsInformation> summons;

    void deserialize(CustomDataInput *input);

private:
    void _summonsFunc(CustomDataInput *input);
};

#endif