#ifndef GAMEROLEPLAYMONSTERANGRYATPLAYERMESSAGE_H
#define GAMEROLEPLAYMONSTERANGRYATPLAYERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayMonsterAngryAtPlayerMessage : public DeserializeInterface {
public:
    double playerId = 0;
    double monsterGroupId = 0;
    double angryStartTime = 0;
    double attackTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _monsterGroupIdFunc(CustomDataInput *input);

    void _angryStartTimeFunc(CustomDataInput *input);

    void _attackTimeFunc(CustomDataInput *input);
};

#endif