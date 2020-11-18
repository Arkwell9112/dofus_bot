#ifndef MAPOBSTACLE_H
#define MAPOBSTACLE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapObstacle : public DeserializeInterface {
public:
    unsigned int obstacleCellId = 0;
    unsigned int state = 0;

    void deserialize(CustomDataInput *input);

private:
    void _obstacleCellIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);
};

#endif