#ifndef GAMEFIGHTSPELLCOOLDOWN_H
#define GAMEFIGHTSPELLCOOLDOWN_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightSpellCooldown : public DeserializeInterface {
public:
    int spellId = 0;
    unsigned int cooldown = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _cooldownFunc(CustomDataInput *input);
};

#endif