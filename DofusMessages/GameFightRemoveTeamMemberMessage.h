#ifndef GAMEFIGHTREMOVETEAMMEMBERMESSAGE_H
#define GAMEFIGHTREMOVETEAMMEMBERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightRemoveTeamMemberMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    unsigned int teamId = 2;
    double charId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _teamIdFunc(CustomDataInput *input);

    void _charIdFunc(CustomDataInput *input);
};

#endif