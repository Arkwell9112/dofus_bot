#ifndef GAMEACTIONFIGHTDISPELLSPELLMESSAGE_H
#define GAMEACTIONFIGHTDISPELLSPELLMESSAGE_H

#include "GameActionFightDispellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightDispellSpellMessage : public GameActionFightDispellMessage {
public:
    unsigned int spellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);
};

#endif