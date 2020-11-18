#ifndef GAMEFIGHTJOINMESSAGE_H
#define GAMEFIGHTJOINMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightJoinMessage : public DeserializeInterface {
public:
    bool isTeamPhase = false;
    bool canBeCancelled = false;
    bool canSayReady = false;
    bool isFightStarted = false;
    unsigned int timeMaxBeforeFightStart = 0;
    unsigned int fightType = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _timeMaxBeforeFightStartFunc(CustomDataInput *input);

    void _fightTypeFunc(CustomDataInput *input);
};

#endif