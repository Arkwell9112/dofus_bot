#ifndef GAMEACTIONFIGHTEXCHANGEPOSITIONSMESSAGE_H
#define GAMEACTIONFIGHTEXCHANGEPOSITIONSMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightExchangePositionsMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int casterCellId = 0;
    int targetCellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _casterCellIdFunc(CustomDataInput *input);

    void _targetCellIdFunc(CustomDataInput *input);
};

#endif