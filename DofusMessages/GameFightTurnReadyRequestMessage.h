#ifndef GAMEFIGHTTURNREADYREQUESTMESSAGE_H
#define GAMEFIGHTTURNREADYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnReadyRequestMessage : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif