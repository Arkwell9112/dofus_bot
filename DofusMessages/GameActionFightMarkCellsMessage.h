#ifndef GAMEACTIONFIGHTMARKCELLSMESSAGE_H
#define GAMEACTIONFIGHTMARKCELLSMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameActionMark.h"

#include <string>
#include <vector>

class GameActionFightMarkCellsMessage : public AbstractGameActionMessage {
public:
    GameActionMark mark;

    void deserialize(CustomDataInput *input);

private:
};

#endif