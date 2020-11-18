#ifndef CURRENTMAPINSTANCEMESSAGE_H
#define CURRENTMAPINSTANCEMESSAGE_H

#include "CurrentMapMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CurrentMapInstanceMessage : public CurrentMapMessage {
public:
    double instantiatedMapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _instantiatedMapIdFunc(CustomDataInput *input);
};

#endif