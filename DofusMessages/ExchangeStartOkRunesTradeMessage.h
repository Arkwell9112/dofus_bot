#ifndef EXCHANGESTARTOKRUNESTRADEMESSAGE_H
#define EXCHANGESTARTOKRUNESTRADEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkRunesTradeMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif