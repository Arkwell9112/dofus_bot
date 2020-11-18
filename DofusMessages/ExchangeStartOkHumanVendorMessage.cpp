#include "ExchangeStartOkHumanVendorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInHumanVendorShop.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeStartOkHumanVendorMessage::deserialize(CustomDataInput *input) {
    ObjectItemToSellInHumanVendorShop _item2;
    this->_sellerIdFunc(input);
    unsigned int _objectsInfosLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectsInfosLen; _i2++) {
        _item2.deserialize(input);
        this->objectsInfos.push_back(_item2);
    }
}

void ExchangeStartOkHumanVendorMessage::_sellerIdFunc(CustomDataInput *input) {
    this->sellerId = input->readDouble();
    if (this->sellerId < -9007199254740990 || this->sellerId > 9007199254740990) {

    }
}
