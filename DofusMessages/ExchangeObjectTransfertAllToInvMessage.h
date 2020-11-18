#ifndef EXCHANGEOBJECTTRANSFERTALLTOINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTALLTOINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertAllToInvMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif