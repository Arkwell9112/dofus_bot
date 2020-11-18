#ifndef EXCHANGEREADYMESSAGE_H
#define EXCHANGEREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeReadyMessage : public DeserializeInterface {
public:
    bool ready = false;
    unsigned int step = 0;

    void deserialize(CustomDataInput *input);

private:
    void _readyFunc(CustomDataInput *input);

    void _stepFunc(CustomDataInput *input);
};

#endif