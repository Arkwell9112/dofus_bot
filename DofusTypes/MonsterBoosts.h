#ifndef MONSTERBOOSTS_H
#define MONSTERBOOSTS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MonsterBoosts : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int xpBoost = 0;
    unsigned int dropBoost = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _xpBoostFunc(CustomDataInput *input);

    void _dropBoostFunc(CustomDataInput *input);
};

#endif