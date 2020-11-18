#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWEREDMESSAGE_H
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWEREDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPlayerFightFriendlyAnsweredMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    double sourceId = 0;
    double targetId = 0;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _sourceIdFunc(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);

    void _acceptFunc(CustomDataInput *input);
};

#endif