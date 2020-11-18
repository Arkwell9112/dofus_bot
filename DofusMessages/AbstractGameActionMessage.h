#ifndef ABSTRACTGAMEACTIONMESSAGE_H
#define ABSTRACTGAMEACTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractGameActionMessage : public DeserializeInterface {
public:
    unsigned int actionId = 0;
    double sourceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _actionIdFunc(CustomDataInput *input);

    void _sourceIdFunc(CustomDataInput *input);
};

#endif