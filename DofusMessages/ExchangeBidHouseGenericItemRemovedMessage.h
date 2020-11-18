#ifndef EXCHANGEBIDHOUSEGENERICITEMREMOVEDMESSAGE_H
#define EXCHANGEBIDHOUSEGENERICITEMREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeBidHouseGenericItemRemovedMessage : public DeserializeInterface {
public:
    unsigned int objGenericId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objGenericIdFunc(CustomDataInput *input);
};

#endif