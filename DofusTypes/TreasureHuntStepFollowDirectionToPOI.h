#ifndef TREASUREHUNTSTEPFOLLOWDIRECTIONTOPOI_H
#define TREASUREHUNTSTEPFOLLOWDIRECTIONTOPOI_H

#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStepFollowDirectionToPOI : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int poiLabelId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _directionFunc(CustomDataInput *input);

    void _poiLabelIdFunc(CustomDataInput *input);
};

#endif