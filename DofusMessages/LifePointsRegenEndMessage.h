#ifndef LIFEPOINTSREGENENDMESSAGE_H
#define LIFEPOINTSREGENENDMESSAGE_H

#include "UpdateLifePointsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LifePointsRegenEndMessage : public UpdateLifePointsMessage {
public:
    unsigned int lifePointsGained = 0;

    void deserialize(CustomDataInput *input);

private:
    void _lifePointsGainedFunc(CustomDataInput *input);
};

#endif