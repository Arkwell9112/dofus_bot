#ifndef BREACHBUDGETMESSAGE_H
#define BREACHBUDGETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachBudgetMessage : public DeserializeInterface {
public:
    unsigned int bugdet = 0;

    void deserialize(CustomDataInput *input);

private:
    void _bugdetFunc(CustomDataInput *input);
};

#endif