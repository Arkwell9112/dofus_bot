#ifndef TELEPORTDESTINATION_H
#define TELEPORTDESTINATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportDestination : public DeserializeInterface {
public:
    unsigned int type = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    unsigned int level = 0;
    unsigned int cost = 0;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _costFunc(CustomDataInput *input);
};

#endif