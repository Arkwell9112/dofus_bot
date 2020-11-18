#ifndef EXCHANGECRAFTPAYMENTMODIFIEDMESSAGE_H
#define EXCHANGECRAFTPAYMENTMODIFIEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftPaymentModifiedMessage : public DeserializeInterface {
public:
    double goldSum = 0;

    void deserialize(CustomDataInput *input);

private:
    void _goldSumFunc(CustomDataInput *input);
};

#endif