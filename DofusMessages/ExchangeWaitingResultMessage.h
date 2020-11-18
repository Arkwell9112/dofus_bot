#ifndef EXCHANGEWAITINGRESULTMESSAGE_H
#define EXCHANGEWAITINGRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeWaitingResultMessage : public DeserializeInterface {
public:
    bool bwait = false;

    void deserialize(CustomDataInput *input);

private:
    void _bwaitFunc(CustomDataInput *input);
};

#endif