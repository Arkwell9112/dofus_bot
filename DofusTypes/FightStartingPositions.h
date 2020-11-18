#ifndef FIGHTSTARTINGPOSITIONS_H
#define FIGHTSTARTINGPOSITIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightStartingPositions : public DeserializeInterface {
public:
    std::vector<unsigned int> positionsForChallengers;
    std::vector<unsigned int> positionsForDefenders;

    void deserialize(CustomDataInput *input);

private:
    void _positionsForChallengersFunc(CustomDataInput *input);

    void _positionsForDefendersFunc(CustomDataInput *input);
};

#endif