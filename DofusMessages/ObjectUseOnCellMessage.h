#ifndef OBJECTUSEONCELLMESSAGE_H
#define OBJECTUSEONCELLMESSAGE_H

#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectUseOnCellMessage : public ObjectUseMessage {
public:
    unsigned int cells = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellsFunc(CustomDataInput *input);
};

#endif