#ifndef BREACHGAMEFIGHTENDMESSAGE_H
#define BREACHGAMEFIGHTENDMESSAGE_H

#include "GameFightEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachGameFightEndMessage : public GameFightEndMessage {
public:
    int budget = 0;

    void deserialize(CustomDataInput *input);

private:
    void _budgetFunc(CustomDataInput *input);
};

#endif