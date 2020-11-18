#ifndef TREASUREHUNTFLAG_H
#define TREASUREHUNTFLAG_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntFlag : public DeserializeInterface {
public:
    double mapId = 0;
    unsigned int state = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);
};

#endif