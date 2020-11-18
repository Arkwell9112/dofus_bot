#ifndef GAMEACTIONFIGHTINVISIBILITYMESSAGE_H
#define GAMEACTIONFIGHTINVISIBILITYMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightInvisibilityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int state = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);
};

#endif