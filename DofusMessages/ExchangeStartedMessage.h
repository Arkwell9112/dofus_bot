#ifndef EXCHANGESTARTEDMESSAGE_H
#define EXCHANGESTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartedMessage : public DeserializeInterface {
public:
    int exchangeType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _exchangeTypeFunc(CustomDataInput *input);
};

#endif