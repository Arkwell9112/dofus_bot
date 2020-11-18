#ifndef TREASUREHUNTSTEPFOLLOWDIRECTION_H
#define TREASUREHUNTSTEPFOLLOWDIRECTION_H

#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStepFollowDirection : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int mapCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _directionFunc(CustomDataInput *input);

    void _mapCountFunc(CustomDataInput *input);
};

#endif