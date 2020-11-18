#ifndef GAMEACTIONFIGHTREFLECTDAMAGESMESSAGE_H
#define GAMEACTIONFIGHTREFLECTDAMAGESMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightReflectDamagesMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif