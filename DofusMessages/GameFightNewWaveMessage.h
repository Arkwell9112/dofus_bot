#ifndef GAMEFIGHTNEWWAVEMESSAGE_H
#define GAMEFIGHTNEWWAVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightNewWaveMessage : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int teamId = 2;
    int nbTurnBeforeNextWave = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _teamIdFunc(CustomDataInput *input);

    void _nbTurnBeforeNextWaveFunc(CustomDataInput *input);
};

#endif