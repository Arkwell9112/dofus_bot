#ifndef EXCHANGEOBJECTTRANSFERTLISTFROMINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTLISTFROMINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertListFromInvMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> ids;

    void deserialize(CustomDataInput *input);

private:
    void _idsFunc(CustomDataInput *input);
};

#endif