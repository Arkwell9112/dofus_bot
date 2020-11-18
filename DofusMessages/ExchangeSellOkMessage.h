#ifndef EXCHANGESELLOKMESSAGE_H
#define EXCHANGESELLOKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeSellOkMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif