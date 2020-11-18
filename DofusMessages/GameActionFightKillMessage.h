#ifndef GAMEACTIONFIGHTKILLMESSAGE_H
#define GAMEACTIONFIGHTKILLMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightKillMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif