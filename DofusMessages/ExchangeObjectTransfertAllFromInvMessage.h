#ifndef EXCHANGEOBJECTTRANSFERTALLFROMINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTALLFROMINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertAllFromInvMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif