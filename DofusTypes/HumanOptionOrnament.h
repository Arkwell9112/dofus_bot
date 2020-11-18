#ifndef HUMANOPTIONORNAMENT_H
#define HUMANOPTIONORNAMENT_H

#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionOrnament : public HumanOption {
public:
    unsigned int ornamentId = 0;
    unsigned int level = 0;
    int leagueId = 0;
    int ladderPosition = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ornamentIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);
};

#endif