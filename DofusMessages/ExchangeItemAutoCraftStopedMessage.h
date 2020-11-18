#ifndef EXCHANGEITEMAUTOCRAFTSTOPEDMESSAGE_H
#define EXCHANGEITEMAUTOCRAFTSTOPEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeItemAutoCraftStopedMessage : public DeserializeInterface {
public:
    int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif