#ifndef GAMEACTIONFIGHTNOSPELLCASTMESSAGE_H
#define GAMEACTIONFIGHTNOSPELLCASTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightNoSpellCastMessage : public DeserializeInterface {
public:
    unsigned int spellLevelId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellLevelIdFunc(CustomDataInput *input);
};

#endif