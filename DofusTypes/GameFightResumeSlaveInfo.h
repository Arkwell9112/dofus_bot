#ifndef GAMEFIGHTRESUMESLAVEINFO_H
#define GAMEFIGHTRESUMESLAVEINFO_H

#include "GameFightSpellCooldown.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightResumeSlaveInfo : public DeserializeInterface {
public:
    double slaveId = 0;
    std::vector<GameFightSpellCooldown> spellCooldowns;
    unsigned int summonCount = 0;
    unsigned int bombCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _slaveIdFunc(CustomDataInput *input);

    void _summonCountFunc(CustomDataInput *input);

    void _bombCountFunc(CustomDataInput *input);
};

#endif