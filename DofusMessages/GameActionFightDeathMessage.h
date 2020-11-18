#ifndef GAMEACTIONFIGHTDEATHMESSAGE_H
#define GAMEACTIONFIGHTDEATHMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightDeathMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif