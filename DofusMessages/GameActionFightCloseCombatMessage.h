#ifndef GAMEACTIONFIGHTCLOSECOMBATMESSAGE_H
#define GAMEACTIONFIGHTCLOSECOMBATMESSAGE_H

#include "AbstractGameActionFightTargetedAbilityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightCloseCombatMessage : public AbstractGameActionFightTargetedAbilityMessage {
public:
    unsigned int weaponGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _weaponGenericIdFunc(CustomDataInput *input);
};

#endif