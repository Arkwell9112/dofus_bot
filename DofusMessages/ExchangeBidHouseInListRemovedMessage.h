#ifndef EXCHANGEBIDHOUSEINLISTREMOVEDMESSAGE_H
#define EXCHANGEBIDHOUSEINLISTREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseInListRemovedMessage : public DeserializeInterface {
public:
    int itemUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _itemUIDFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);

    void _objectTypeFunc(CustomDataInput *input);
};

#endif