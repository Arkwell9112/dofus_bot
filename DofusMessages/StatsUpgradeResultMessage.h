#ifndef STATSUPGRADERESULTMESSAGE_H
#define STATSUPGRADERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatsUpgradeResultMessage : public DeserializeInterface {
public:
    int result = 0;
    unsigned int nbCharacBoost = 0;

    void deserialize(CustomDataInput *input);

private:
    void _resultFunc(CustomDataInput *input);

    void _nbCharacBoostFunc(CustomDataInput *input);
};

#endif