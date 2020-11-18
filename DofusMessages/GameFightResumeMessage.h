#ifndef GAMEFIGHTRESUMEMESSAGE_H
#define GAMEFIGHTRESUMEMESSAGE_H

#include "GameFightSpectateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightSpellCooldown.h"

#include <string>
#include <vector>

class GameFightResumeMessage : public GameFightSpectateMessage {
public:
    std::vector<GameFightSpellCooldown> spellCooldowns;
    unsigned int summonCount = 0;
    unsigned int bombCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _summonCountFunc(CustomDataInput *input);

    void _bombCountFunc(CustomDataInput *input);
};

#endif