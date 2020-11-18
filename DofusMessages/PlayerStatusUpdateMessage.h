#ifndef PLAYERSTATUSUPDATEMESSAGE_H
#define PLAYERSTATUSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PlayerStatus.h"

#include <string>
#include <vector>

class PlayerStatusUpdateMessage : public DeserializeInterface {
public:
    unsigned int accountId = 0;
    double playerId = 0;
    PlayerStatus status;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);
};

#endif