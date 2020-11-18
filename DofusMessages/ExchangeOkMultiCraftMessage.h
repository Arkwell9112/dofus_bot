#ifndef EXCHANGEOKMULTICRAFTMESSAGE_H
#define EXCHANGEOKMULTICRAFTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeOkMultiCraftMessage : public DeserializeInterface {
public:
    double initiatorId = 0;
    double otherId = 0;
    int role = 0;

    void deserialize(CustomDataInput *input);

private:
    void _initiatorIdFunc(CustomDataInput *input);

    void _otherIdFunc(CustomDataInput *input);

    void _roleFunc(CustomDataInput *input);
};

#endif