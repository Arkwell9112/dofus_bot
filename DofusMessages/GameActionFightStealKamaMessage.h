#ifndef GAMEACTIONFIGHTSTEALKAMAMESSAGE_H
#define GAMEACTIONFIGHTSTEALKAMAMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightStealKamaMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    double amount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _amountFunc(CustomDataInput *input);
};

#endif