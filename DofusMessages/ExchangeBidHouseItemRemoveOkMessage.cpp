#include "ExchangeBidHouseItemRemoveOkMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ExchangeBidHouseItemRemoveOkMessage::deserialize(CustomDataInput *input) {
    this->_sellerIdFunc(input);
}

void ExchangeBidHouseItemRemoveOkMessage::_sellerIdFunc(CustomDataInput *input) {
    this->sellerId = input->readInt();
}
