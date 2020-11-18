#ifndef EXCHANGESTARTOKHUMANVENDORMESSAGE_H
#define EXCHANGESTARTOKHUMANVENDORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInHumanVendorShop.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeStartOkHumanVendorMessage : public DeserializeInterface {
public:
    double sellerId = 0;
    std::vector<ObjectItemToSellInHumanVendorShop> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
    void _sellerIdFunc(CustomDataInput *input);
};

#endif