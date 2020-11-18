#include "HouseBuyResultMessage.h"
#include "ExchangeBidHouseBuyResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseBuyResultMessage::deserialize(CustomDataInput *input) {
    this->_uidFunc(input);
    this->_boughtFunc(input);
}

void ExchangeBidHouseBuyResultMessage::_uidFunc(CustomDataInput *input) {
    this->uid = input->readVarUhInt();
    if (this->uid < 0) {

    }
}

void ExchangeBidHouseBuyResultMessage::_boughtFunc(CustomDataInput *input) {
    this->bought = input->readBoolean();
}
