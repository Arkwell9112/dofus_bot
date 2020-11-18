#ifndef EXCHANGEOBJECTMESSAGE_H
#define EXCHANGEOBJECTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeObjectMessage : public DeserializeInterface {
public:
    bool remote = false;

    void deserialize(CustomDataInput *input);

private:
    void _remoteFunc(CustomDataInput *input);
};

#endif