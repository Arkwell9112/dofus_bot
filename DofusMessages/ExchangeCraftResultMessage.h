#ifndef EXCHANGECRAFTRESULTMESSAGE_H
#define EXCHANGECRAFTRESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeCraftResultMessage : public DeserializeInterface {
public:
    unsigned int craftResult = 0;

    void deserialize(CustomDataInput *input);

private:
    void _craftResultFunc(CustomDataInput *input);
};

#endif