#ifndef UPDATELIFEPOINTSMESSAGE_H
#define UPDATELIFEPOINTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class UpdateLifePointsMessage : public DeserializeInterface {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;

    void deserialize(CustomDataInput *input);

private:
    void _lifePointsFunc(CustomDataInput *input);

    void _maxLifePointsFunc(CustomDataInput *input);
};

#endif