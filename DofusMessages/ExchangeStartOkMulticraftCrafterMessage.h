#ifndef EXCHANGESTARTOKMULTICRAFTCRAFTERMESSAGE_H
#define EXCHANGESTARTOKMULTICRAFTCRAFTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkMulticraftCrafterMessage : public DeserializeInterface {
public:
    unsigned int skillId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _skillIdFunc(CustomDataInput *input);
};

#endif