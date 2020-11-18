#ifndef GAMEACTIONFIGHTLIFEPOINTSGAINMESSAGE_H
#define GAMEACTIONFIGHTLIFEPOINTSGAINMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightLifePointsGainMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int delta = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _deltaFunc(CustomDataInput *input);
};

#endif