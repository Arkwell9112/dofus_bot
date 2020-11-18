#ifndef GAMEROLEPLAYAGGRESSIONMESSAGE_H
#define GAMEROLEPLAYAGGRESSIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayAggressionMessage : public DeserializeInterface {
public:
    double attackerId = 0;
    double defenderId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _attackerIdFunc(CustomDataInput *input);

    void _defenderIdFunc(CustomDataInput *input);
};

#endif