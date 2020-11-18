#ifndef EXCHANGEREQUESTEDMESSAGE_H
#define EXCHANGEREQUESTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestedMessage : public DeserializeInterface {
public:
    int exchangeType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _exchangeTypeFunc(CustomDataInput *input);
};

#endif