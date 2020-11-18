#ifndef EXCHANGECRAFTCOUNTREQUESTMESSAGE_H
#define EXCHANGECRAFTCOUNTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftCountRequestMessage : public DeserializeInterface {
public:
    int count = 0;

    void deserialize(CustomDataInput *input);

private:
    void _countFunc(CustomDataInput *input);
};

#endif