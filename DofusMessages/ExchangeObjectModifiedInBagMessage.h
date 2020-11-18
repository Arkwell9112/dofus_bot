#ifndef EXCHANGEOBJECTMODIFIEDINBAGMESSAGE_H
#define EXCHANGEOBJECTMODIFIEDINBAGMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectModifiedInBagMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif