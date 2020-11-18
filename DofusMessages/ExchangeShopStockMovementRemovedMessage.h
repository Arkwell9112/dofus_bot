#ifndef EXCHANGESHOPSTOCKMOVEMENTREMOVEDMESSAGE_H
#define EXCHANGESHOPSTOCKMOVEMENTREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeShopStockMovementRemovedMessage : public DeserializeInterface {
public:
    unsigned int objectId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectIdFunc(CustomDataInput *input);
};

#endif