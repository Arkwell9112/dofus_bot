#include "ExchangeStartOkNpcShopMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemToSellInNpcShop.h"

#include "../DofusTypes/ObjectItemToSell.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeStartOkNpcShopMessage::deserialize(CustomDataInput *input) {
    ObjectItemToSellInNpcShop _item3;
    this->_npcSellerIdFunc(input);
    this->_tokenIdFunc(input);
    unsigned int _objectsInfosLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _objectsInfosLen; _i3++) {
        _item3.deserialize(input);
        this->objectsInfos.push_back(_item3);
    }
}

void ExchangeStartOkNpcShopMessage::_npcSellerIdFunc(CustomDataInput *input) {
    this->npcSellerId = input->readDouble();
    if (this->npcSellerId < -9007199254740990 || this->npcSellerId > 9007199254740990) {

    }
}

void ExchangeStartOkNpcShopMessage::_tokenIdFunc(CustomDataInput *input) {
    this->tokenId = input->readVarUhShort();
    if (this->tokenId < 0) {

    }
}
