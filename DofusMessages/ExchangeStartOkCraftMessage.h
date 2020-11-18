#ifndef EXCHANGESTARTOKCRAFTMESSAGE_H
#define EXCHANGESTARTOKCRAFTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkCraftMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif