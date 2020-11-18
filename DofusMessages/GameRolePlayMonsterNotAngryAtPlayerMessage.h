#ifndef GAMEROLEPLAYMONSTERNOTANGRYATPLAYERMESSAGE_H
#define GAMEROLEPLAYMONSTERNOTANGRYATPLAYERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayMonsterNotAngryAtPlayerMessage : public DeserializeInterface {
public:
    double playerId = 0;
    double monsterGroupId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _monsterGroupIdFunc(CustomDataInput *input);
};

#endif