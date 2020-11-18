#ifndef GAMECONTEXTKICKMESSAGE_H
#define GAMECONTEXTKICKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextKickMessage : public DeserializeInterface {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif