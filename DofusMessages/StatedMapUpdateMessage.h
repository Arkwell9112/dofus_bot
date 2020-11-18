#ifndef STATEDMAPUPDATEMESSAGE_H
#define STATEDMAPUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatedElement.h"

#include <string>
#include <vector>

class StatedMapUpdateMessage : public DeserializeInterface {
public:
    std::vector<StatedElement> statedElements;

    void deserialize(CustomDataInput *input);

private:
};

#endif