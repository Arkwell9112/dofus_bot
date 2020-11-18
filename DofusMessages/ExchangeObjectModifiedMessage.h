#ifndef EXCHANGEOBJECTMODIFIEDMESSAGE_H
#define EXCHANGEOBJECTMODIFIEDMESSAGE_H

#include "ObjectModifiedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectModifiedMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif