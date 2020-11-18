#ifndef GAMEACTIONFIGHTDISPELLABLEEFFECTMESSAGE_H
#define GAMEACTIONFIGHTDISPELLABLEEFFECTMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AbstractFightDispellableEffect.h"

#include <string>
#include <vector>

class GameActionFightDispellableEffectMessage : public AbstractGameActionMessage {
public:
    AbstractFightDispellableEffect effect;

    void deserialize(CustomDataInput *input);

private:
};

#endif