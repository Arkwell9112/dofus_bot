#include "ExchangeStartedBidSellerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInBid.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeStartedBidSellerMessage::deserialize(CustomDataInput *input) {
    ObjectItemToSellInBid _item2;
    this->sellerDescriptor.deserialize(input);
    unsigned int _objectsInfosLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectsInfosLen; _i2++) {
        _item2.deserialize(input);
        this->objectsInfos.push_back(_item2);
    }
}