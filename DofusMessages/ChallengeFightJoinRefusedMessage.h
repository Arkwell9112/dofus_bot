#ifndef CHALLENGEFIGHTJOINREFUSEDMESSAGE_H
#define CHALLENGEFIGHTJOINREFUSEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChallengeFightJoinRefusedMessage : public DeserializeInterface {
public:
    double playerId = 0;
    int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _reasonFunc(CustomDataInput *input);
};

#endif