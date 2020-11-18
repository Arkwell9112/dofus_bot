#ifndef GAMEACTIONFIGHTDISPELLMESSAGE_H
#define GAMEACTIONFIGHTDISPELLMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightDispellMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    bool verboseCast = false;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _verboseCastFunc(CustomDataInput *input);
};

#endif