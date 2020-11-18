#ifndef GAMEROLEPLAYARENAFIGHTANSWERMESSAGE_H
#define GAMEROLEPLAYARENAFIGHTANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaFightAnswerMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _acceptFunc(CustomDataInput *input);
};

#endif