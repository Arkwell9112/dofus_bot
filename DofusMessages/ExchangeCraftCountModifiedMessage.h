#ifndef EXCHANGECRAFTCOUNTMODIFIEDMESSAGE_H
#define EXCHANGECRAFTCOUNTMODIFIEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftCountModifiedMessage : public DeserializeInterface {
public:
    int count = 0;

    void deserialize(CustomDataInput *input);

private:
    void _countFunc(CustomDataInput *input);
};

#endif