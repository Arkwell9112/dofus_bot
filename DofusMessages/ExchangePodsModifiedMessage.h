#ifndef EXCHANGEPODSMODIFIEDMESSAGE_H
#define EXCHANGEPODSMODIFIEDMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangePodsModifiedMessage : public ExchangeObjectMessage {
public:
    unsigned int currentWeight = 0;
    unsigned int maxWeight = 0;

    void deserialize(CustomDataInput *input);

private:
    void _currentWeightFunc(CustomDataInput *input);

    void _maxWeightFunc(CustomDataInput *input);
};

#endif