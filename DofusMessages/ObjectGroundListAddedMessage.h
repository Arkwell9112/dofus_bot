#ifndef OBJECTGROUNDLISTADDEDMESSAGE_H
#define OBJECTGROUNDLISTADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectGroundListAddedMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> cells;
    std::vector<unsigned int> referenceIds;

    void deserialize(CustomDataInput *input);

private:
    void _cellsFunc(CustomDataInput *input);

    void _referenceIdsFunc(CustomDataInput *input);
};

#endif