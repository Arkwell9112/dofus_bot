#ifndef TREASUREHUNTSTEPDIG_H
#define TREASUREHUNTSTEPDIG_H

#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntStepDig : public TreasureHuntStep {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif