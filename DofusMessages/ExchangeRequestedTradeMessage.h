#ifndef EXCHANGEREQUESTEDTRADEMESSAGE_H
#define EXCHANGEREQUESTEDTRADEMESSAGE_H

#include "ExchangeRequestedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestedTradeMessage : public ExchangeRequestedMessage {
public:
    double source = 0;
    double target = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sourceFunc(CustomDataInput *input);

    void _targetFunc(CustomDataInput *input);
};

#endif