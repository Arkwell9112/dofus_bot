#ifndef EXCHANGEOBJECTTRANSFERTLISTTOINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTLISTTOINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertListToInvMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> ids;

    void deserialize(CustomDataInput *input);

private:
    void _idsFunc(CustomDataInput *input);
};

#endif