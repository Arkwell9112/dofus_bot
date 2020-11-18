#ifndef BREACHBRANCH_H
#define BREACHBRANCH_H

#include "MonsterInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachBranch : public DeserializeInterface {
public:
    unsigned int room = 0;
    unsigned int element = 0;
    std::vector<MonsterInGroupLightInformations> bosses;
    double map = 0;
    int score = 0;
    int relativeScore = 0;
    std::vector<MonsterInGroupLightInformations> monsters;

    void deserialize(CustomDataInput *input);

private:
    void _roomFunc(CustomDataInput *input);

    void _elementFunc(CustomDataInput *input);

    void _mapFunc(CustomDataInput *input);

    void _scoreFunc(CustomDataInput *input);

    void _relativeScoreFunc(CustomDataInput *input);
};

#endif