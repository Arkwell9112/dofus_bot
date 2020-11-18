#ifndef OBJECTGROUNDREMOVEDMULTIPLEMESSAGE_H
#define OBJECTGROUNDREMOVEDMULTIPLEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectGroundRemovedMultipleMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> cells;

    void deserialize(CustomDataInput *input);

private:
    void _cellsFunc(CustomDataInput *input);
};

#endif