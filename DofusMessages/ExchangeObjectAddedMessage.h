#ifndef EXCHANGEOBJECTADDEDMESSAGE_H
#define EXCHANGEOBJECTADDEDMESSAGE_H

#include "ObjectAddedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectAddedMessage : public ExchangeObjectMessage {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif