#ifndef TREASUREHUNTSTEPFOLLOWDIRECTIONTOHINT_H
#define TREASUREHUNTSTEPFOLLOWDIRECTIONTOHINT_H

#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStepFollowDirectionToHint : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int npcId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _directionFunc(CustomDataInput *input);

    void _npcIdFunc(CustomDataInput *input);
};

#endif