#ifndef GAMEACTIONFIGHTDODGEPOINTLOSSMESSAGE_H
#define GAMEACTIONFIGHTDODGEPOINTLOSSMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightDodgePointLossMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int amount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _amountFunc(CustomDataInput *input);
};

#endif