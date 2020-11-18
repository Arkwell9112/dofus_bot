#ifndef EXCHANGEOBJECTTRANSFERTEXISTINGFROMINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTEXISTINGFROMINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertExistingFromInvMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif