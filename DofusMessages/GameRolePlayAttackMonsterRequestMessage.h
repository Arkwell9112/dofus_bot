#ifndef GAMEROLEPLAYATTACKMONSTERREQUESTMESSAGE_H
#define GAMEROLEPLAYATTACKMONSTERREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayAttackMonsterRequestMessage : public DeserializeInterface {
public:
    double monsterGroupId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _monsterGroupIdFunc(CustomDataInput *input);
};

#endif