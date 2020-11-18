#ifndef EXCHANGESTARTOKNPCTRADEMESSAGE_H
#define EXCHANGESTARTOKNPCTRADEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkNpcTradeMessage : public DeserializeInterface {
public:
    double npcId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _npcIdFunc(CustomDataInput *input);
};

#endif