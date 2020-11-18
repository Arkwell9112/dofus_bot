#ifndef GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE_H
#define GAMECONTEXTREMOVEMULTIPLEELEMENTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextRemoveMultipleElementsMessage : public DeserializeInterface {
public:
    std::vector<double> elementsIds;

    void deserialize(CustomDataInput *input);

private:
    void _elementsIdsFunc(CustomDataInput *input);
};

#endif