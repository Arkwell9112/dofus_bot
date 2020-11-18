#ifndef EXCHANGEWEIGHTMESSAGE_H
#define EXCHANGEWEIGHTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeWeightMessage : public DeserializeInterface {
public:
    unsigned int currentWeight = 0;
    unsigned int maxWeight = 0;

    void deserialize(CustomDataInput *input);

private:
    void _currentWeightFunc(CustomDataInput *input);

    void _maxWeightFunc(CustomDataInput *input);
};

#endif