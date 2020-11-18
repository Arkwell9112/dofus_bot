#ifndef GAMEROLEPLAYREMOVECHALLENGEMESSAGE_H
#define GAMEROLEPLAYREMOVECHALLENGEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayRemoveChallengeMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);
};

#endif