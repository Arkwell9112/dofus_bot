#ifndef EXCHANGESTARTOKNPCSHOPMESSAGE_H
#define EXCHANGESTARTOKNPCSHOPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInNpcShop.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeStartOkNpcShopMessage : public DeserializeInterface {
public:
    double npcSellerId = 0;
    unsigned int tokenId = 0;
    std::vector<ObjectItemToSellInNpcShop> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
    void _npcSellerIdFunc(CustomDataInput *input);

    void _tokenIdFunc(CustomDataInput *input);
};

#endif