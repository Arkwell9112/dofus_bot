#ifndef GAMEFIGHTSTARTINGMESSAGE_H
#define GAMEFIGHTSTARTINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightStartingMessage : public DeserializeInterface {
public:
    unsigned int fightType = 0;
    unsigned int fightId = 0;
    double attackerId = 0;
    double defenderId = 0;
    bool containsBoss = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightTypeFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);

    void _attackerIdFunc(CustomDataInput *input);

    void _defenderIdFunc(CustomDataInput *input);

    void _containsBossFunc(CustomDataInput *input);
};

#endif