#ifndef GAMEFIGHTSYNCHRONIZEMESSAGE_H
#define GAMEFIGHTSYNCHRONIZEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

#include <string>
#include <vector>

class GameFightSynchronizeMessage : public DeserializeInterface {
public:
    std::vector<GameFightFighterInformations> fighters;

    void deserialize(CustomDataInput *input);

private:
    void _fightersFunc(CustomDataInput *input);
};

#endif