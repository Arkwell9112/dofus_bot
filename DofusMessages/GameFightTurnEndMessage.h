#ifndef GAMEFIGHTTURNENDMESSAGE_H
#define GAMEFIGHTTURNENDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnEndMessage : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif