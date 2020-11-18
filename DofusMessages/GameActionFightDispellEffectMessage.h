#ifndef GAMEACTIONFIGHTDISPELLEFFECTMESSAGE_H
#define GAMEACTIONFIGHTDISPELLEFFECTMESSAGE_H

#include "GameActionFightDispellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightDispellEffectMessage : public GameActionFightDispellMessage {
public:
    unsigned int boostUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _boostUIDFunc(CustomDataInput *input);
};

#endif