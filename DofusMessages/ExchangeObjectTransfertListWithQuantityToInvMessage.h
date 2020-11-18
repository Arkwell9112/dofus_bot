#ifndef EXCHANGEOBJECTTRANSFERTLISTWITHQUANTITYTOINVMESSAGE_H
#define EXCHANGEOBJECTTRANSFERTLISTWITHQUANTITYTOINVMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectTransfertListWithQuantityToInvMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> ids;
    std::vector<unsigned int> qtys;

    void deserialize(CustomDataInput *input);

private:
    void _idsFunc(CustomDataInput *input);

    void _qtysFunc(CustomDataInput *input);
};

#endif