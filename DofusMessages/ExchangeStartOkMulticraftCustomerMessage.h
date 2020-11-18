#ifndef EXCHANGESTARTOKMULTICRAFTCUSTOMERMESSAGE_H
#define EXCHANGESTARTOKMULTICRAFTCUSTOMERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkMulticraftCustomerMessage : public DeserializeInterface {
public:
    unsigned int skillId = 0;
    unsigned int crafterJobLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _skillIdFunc(CustomDataInput *input);

    void _crafterJobLevelFunc(CustomDataInput *input);
};

#endif