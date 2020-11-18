#ifndef EXCHANGEPLAYERREQUESTMESSAGE_H
#define EXCHANGEPLAYERREQUESTMESSAGE_H

#include "ExchangeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangePlayerRequestMessage : public ExchangeRequestMessage {
public:
    double target = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetFunc(CustomDataInput *input);
};

#endif