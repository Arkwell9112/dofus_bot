#ifndef EXCHANGEOBJECTPUTINBAGMESSAGE_H
#define EXCHANGEOBJECTPUTINBAGMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectPutInBagMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif