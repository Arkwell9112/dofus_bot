#ifndef MAPCOORDINATES_H
#define MAPCOORDINATES_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapCoordinates : public DeserializeInterface {
public:
    int worldX = 0;
    int worldY = 0;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);
};

#endif