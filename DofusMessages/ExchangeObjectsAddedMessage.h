#ifndef EXCHANGEOBJECTSADDEDMESSAGE_H
#define EXCHANGEOBJECTSADDEDMESSAGE_H

#include "ObjectsAddedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectsAddedMessage : public ExchangeObjectMessage {
public:
    std::vector<ObjectItem> object;

    void deserialize(CustomDataInput *input);

private:
};

#endif