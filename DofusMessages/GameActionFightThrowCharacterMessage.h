#ifndef GAMEACTIONFIGHTTHROWCHARACTERMESSAGE_H
#define GAMEACTIONFIGHTTHROWCHARACTERMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightThrowCharacterMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _cellIdFunc(CustomDataInput *input);
};

#endif