#ifndef GAMEACTIONFIGHTUNMARKCELLSMESSAGE_H
#define GAMEACTIONFIGHTUNMARKCELLSMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightUnmarkCellsMessage : public AbstractGameActionMessage {
public:
    int markId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _markIdFunc(CustomDataInput *input);
};

#endif