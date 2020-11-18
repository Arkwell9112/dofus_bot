#ifndef TAXCOLLECTORSTATEUPDATEMESSAGE_H
#define TAXCOLLECTORSTATEUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TaxCollectorStateUpdateMessage : public DeserializeInterface {
public:
    double uniqueId = 0;
    int state = 0;

    void deserialize(CustomDataInput *input);

private:
    void _uniqueIdFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);
};

#endif