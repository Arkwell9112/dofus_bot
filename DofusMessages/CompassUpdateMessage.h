#ifndef COMPASSUPDATEMESSAGE_H
#define COMPASSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MapCoordinates.h"

#include <string>
#include <vector>

class CompassUpdateMessage : public DeserializeInterface {
public:
    unsigned int type = 0;
    MapCoordinates coords;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif