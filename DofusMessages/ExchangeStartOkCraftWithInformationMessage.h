#ifndef EXCHANGESTARTOKCRAFTWITHINFORMATIONMESSAGE_H
#define EXCHANGESTARTOKCRAFTWITHINFORMATIONMESSAGE_H

#include "ExchangeStartOkCraftMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkCraftWithInformationMessage : public ExchangeStartOkCraftMessage {
public:
    unsigned int skillId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _skillIdFunc(CustomDataInput *input);
};

#endif