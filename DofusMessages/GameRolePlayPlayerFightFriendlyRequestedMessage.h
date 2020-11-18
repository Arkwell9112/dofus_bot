#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYREQUESTEDMESSAGE_H
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYREQUESTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPlayerFightFriendlyRequestedMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    double sourceId = 0;
    double targetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _sourceIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);
};

#endif