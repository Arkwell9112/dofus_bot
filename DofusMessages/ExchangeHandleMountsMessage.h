#ifndef EXCHANGEHANDLEMOUNTSMESSAGE_H
#define EXCHANGEHANDLEMOUNTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeHandleMountsMessage : public DeserializeInterface {
public:
    int actionType = 0;
    std::vector<unsigned int> ridesId;

    void deserialize(CustomDataInput *input);

private:
    void _actionTypeFunc(CustomDataInput *input);

    void _ridesIdFunc(CustomDataInput *input);
};

#endif