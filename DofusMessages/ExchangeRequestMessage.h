#ifndef EXCHANGEREQUESTMESSAGE_H
#define EXCHANGEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeRequestMessage : public DeserializeInterface {
public:
    int exchangeType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _exchangeTypeFunc(CustomDataInput *input);
};

#endif