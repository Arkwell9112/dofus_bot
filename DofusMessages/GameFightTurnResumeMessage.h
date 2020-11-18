#ifndef GAMEFIGHTTURNRESUMEMESSAGE_H
#define GAMEFIGHTTURNRESUMEMESSAGE_H

#include "GameFightTurnStartMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnResumeMessage : public GameFightTurnStartMessage {
public:
    unsigned int remainingTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _remainingTimeFunc(CustomDataInput *input);
};

#endif