#ifndef GAMEFIGHTTURNFINISHMESSAGE_H
#define GAMEFIGHTTURNFINISHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnFinishMessage : public DeserializeInterface {
public:
    bool isAfk = false;

    void deserialize(CustomDataInput *input);

private:
    void _isAfkFunc(CustomDataInput *input);
};

#endif