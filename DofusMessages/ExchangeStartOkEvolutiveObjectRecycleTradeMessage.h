#ifndef EXCHANGESTARTOKEVOLUTIVEOBJECTRECYCLETRADEMESSAGE_H
#define EXCHANGESTARTOKEVOLUTIVEOBJECTRECYCLETRADEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkEvolutiveObjectRecycleTradeMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif