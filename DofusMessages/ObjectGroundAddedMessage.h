#ifndef OBJECTGROUNDADDEDMESSAGE_H
#define OBJECTGROUNDADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectGroundAddedMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;
    unsigned int objectGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);
};

#endif