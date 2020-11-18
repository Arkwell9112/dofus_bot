#ifndef GUILDFIGHTPLAYERSHELPERSLEAVEMESSAGE_H
#define GUILDFIGHTPLAYERSHELPERSLEAVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFightPlayersHelpersLeaveMessage : public DeserializeInterface {
public:
    double fightId = 0;
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);
};

#endif