#ifndef GAMEACTIONFIGHTCHANGELOOKMESSAGE_H
#define GAMEACTIONFIGHTCHANGELOOKMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityLook.h"

#include <string>
#include <vector>

class GameActionFightChangeLookMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    EntityLook entityLook;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);
};

#endif