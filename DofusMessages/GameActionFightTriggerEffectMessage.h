#ifndef GAMEACTIONFIGHTTRIGGEREFFECTMESSAGE_H
#define GAMEACTIONFIGHTTRIGGEREFFECTMESSAGE_H

#include "GameActionFightDispellEffectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightTriggerEffectMessage : public GameActionFightDispellEffectMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif