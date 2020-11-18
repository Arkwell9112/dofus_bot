#ifndef GAMEROLEPLAYARENAFIGHTERSTATUSMESSAGE_H
#define GAMEROLEPLAYARENAFIGHTERSTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaFighterStatusMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    double playerId = 0;
    bool accepted = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);

    void _acceptedFunc(CustomDataInput *input);
};

#endif