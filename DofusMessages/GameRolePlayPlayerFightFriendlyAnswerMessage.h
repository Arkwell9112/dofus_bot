#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWERMESSAGE_H
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPlayerFightFriendlyAnswerMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _acceptFunc(CustomDataInput *input);
};

#endif