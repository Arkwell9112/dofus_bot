#ifndef EXCHANGEOBJECTSMODIFIEDMESSAGE_H
#define EXCHANGEOBJECTSMODIFIEDMESSAGE_H

#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeObjectsModifiedMessage : public ExchangeObjectMessage {
public:
    std::vector<ObjectItem> object;

    void deserialize(CustomDataInput *input);

private:
};

#endif