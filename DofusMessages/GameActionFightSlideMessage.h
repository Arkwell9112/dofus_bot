#ifndef GAMEACTIONFIGHTSLIDEMESSAGE_H
#define GAMEACTIONFIGHTSLIDEMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightSlideMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int startCellId = 0;
    int endCellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _startCellIdFunc(CustomDataInput *input);

    void _endCellIdFunc(CustomDataInput *input);
};

#endif