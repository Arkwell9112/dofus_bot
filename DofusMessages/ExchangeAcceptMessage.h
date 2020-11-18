#ifndef EXCHANGEACCEPTMESSAGE_H
#define EXCHANGEACCEPTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeAcceptMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif