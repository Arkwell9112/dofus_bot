#ifndef PRISMMODULEEXCHANGEREQUESTMESSAGE_H
#define PRISMMODULEEXCHANGEREQUESTMESSAGE_H

#include "ExchangeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismModuleExchangeRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif