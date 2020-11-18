#ifndef BREACHKICKREQUESTMESSAGE_H
#define BREACHKICKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachKickRequestMessage : public DeserializeInterface {
public:
    double target = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetFunc(CustomDataInput *input);
};

#endif