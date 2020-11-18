#ifndef OBJECTAVERAGEPRICESGETMESSAGE_H
#define OBJECTAVERAGEPRICESGETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectAveragePricesGetMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif