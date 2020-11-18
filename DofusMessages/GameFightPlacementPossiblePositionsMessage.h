#ifndef GAMEFIGHTPLACEMENTPOSSIBLEPOSITIONSMESSAGE_H
#define GAMEFIGHTPLACEMENTPOSSIBLEPOSITIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementPossiblePositionsMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> positionsForChallengers;
    std::vector<unsigned int> positionsForDefenders;
    unsigned int teamNumber = 2;

    void deserialize(CustomDataInput *input);

private:
    void _positionsForChallengersFunc(CustomDataInput *input);

    void _positionsForDefendersFunc(CustomDataInput *input);

    void _teamNumberFunc(CustomDataInput *input);
};

#endif