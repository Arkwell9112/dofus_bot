#ifndef EXCHANGEMONEYMOVEMENTINFORMATIONMESSAGE_H
#define EXCHANGEMONEYMOVEMENTINFORMATIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMoneyMovementInformationMessage : public DeserializeInterface {
public:
    double limit = 0;

    void deserialize(CustomDataInput *input);

private:
    void _limitFunc(CustomDataInput *input);
};

#endif