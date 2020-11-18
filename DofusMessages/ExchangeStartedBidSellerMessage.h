#ifndef EXCHANGESTARTEDBIDSELLERMESSAGE_H
#define EXCHANGESTARTEDBIDSELLERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SellerBuyerDescriptor.h"

#include "../DofusTypes/ObjectItemToSellInBid.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ExchangeStartedBidSellerMessage : public DeserializeInterface {
public:
    SellerBuyerDescriptor sellerDescriptor;
    std::vector<ObjectItemToSellInBid> objectsInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif