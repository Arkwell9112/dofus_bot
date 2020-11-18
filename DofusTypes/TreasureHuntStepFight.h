#ifndef TREASUREHUNTSTEPFIGHT_H
#define TREASUREHUNTSTEPFIGHT_H

#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStepFight : public TreasureHuntStep {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif