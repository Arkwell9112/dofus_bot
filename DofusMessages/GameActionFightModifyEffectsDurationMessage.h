#ifndef GAMEACTIONFIGHTMODIFYEFFECTSDURATIONMESSAGE_H
#define GAMEACTIONFIGHTMODIFYEFFECTSDURATIONMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightModifyEffectsDurationMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int delta = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _deltaFunc(CustomDataInput *input);
};

#endif