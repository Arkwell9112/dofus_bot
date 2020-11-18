#ifndef EXCHANGEISREADYMESSAGE_H
#define EXCHANGEISREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeIsReadyMessage : public DeserializeInterface {
public:
    double id = 0;
    bool ready = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _readyFunc(CustomDataInput *input);
};

#endif