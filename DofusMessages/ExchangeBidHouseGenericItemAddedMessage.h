#ifndef EXCHANGEBIDHOUSEGENERICITEMADDEDMESSAGE_H
#define EXCHANGEBIDHOUSEGENERICITEMADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeBidHouseGenericItemAddedMessage : public DeserializeInterface {
public:
    unsigned int objGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objGenericIdFunc(CustomDataInput *input);
};

#endif