#ifndef TREASUREHUNTAVAILABLERETRYCOUNTUPDATEMESSAGE_H
#define TREASUREHUNTAVAILABLERETRYCOUNTUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntAvailableRetryCountUpdateMessage : public DeserializeInterface {
public:
    unsigned int questType = 0;
    int availableRetryCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _questTypeFunc(CustomDataInput *input);

    void _availableRetryCountFunc(CustomDataInput *input);
};

#endif