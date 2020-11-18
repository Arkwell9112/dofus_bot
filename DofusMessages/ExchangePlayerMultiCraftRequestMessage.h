#ifndef EXCHANGEPLAYERMULTICRAFTREQUESTMESSAGE_H
#define EXCHANGEPLAYERMULTICRAFTREQUESTMESSAGE_H

#include "ExchangeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangePlayerMultiCraftRequestMessage : public ExchangeRequestMessage {
public:
    double target = 0;
    unsigned int skillId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetFunc(CustomDataInput *input);

    void _skillIdFunc(CustomDataInput *input);
};

#endif