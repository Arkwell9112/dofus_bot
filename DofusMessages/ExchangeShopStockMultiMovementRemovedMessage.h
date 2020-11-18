#ifndef EXCHANGESHOPSTOCKMULTIMOVEMENTREMOVEDMESSAGE_H
#define EXCHANGESHOPSTOCKMULTIMOVEMENTREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeShopStockMultiMovementRemovedMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> objectIdList;

    void deserialize(CustomDataInput *input);

private:
    void _objectIdListFunc(CustomDataInput *input);
};

#endif