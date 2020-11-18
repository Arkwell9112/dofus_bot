#ifndef EXCHANGEOBJECTTRANSFERTEXISTINGTOINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTEXISTINGTOINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertExistingToInvMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif