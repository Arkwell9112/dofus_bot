#ifndef EXCHANGETYPESITEMSEXCHANGERDESCRIPTIONFORUSERMESSAGE_H
#define EXCHANGETYPESITEMSEXCHANGERDESCRIPTIONFORUSERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include "../DofusTypes/BidExchangerObjectInfo.h"

#include <string>
#include <vector>

class ExchangeTypesItemsExchangerDescriptionForUserMessage : public DeserializeInterface {
public:
    unsigned int objectType = 0;
    std::vector<BidExchangerObjectInfo> itemTypeDescriptions;

    void deserialize(CustomDataInput *input);

private:
    void _objectTypeFunc(CustomDataInput *input);
};

#endif