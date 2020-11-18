#ifndef GAMEFIGHTTURNSTARTMESSAGE_H
#define GAMEFIGHTTURNSTARTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnStartMessage : public DeserializeInterface {
public:
    double id = 0;
    unsigned int waitTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _waitTimeFunc(CustomDataInput *input);
};

#endif