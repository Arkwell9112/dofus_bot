#include "ExchangeBidHouseGenericItemAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ExchangeBidHouseGenericItemAddedMessage::deserialize(CustomDataInput *input) {
    this->_objGenericIdFunc(input);
}

void ExchangeBidHouseGenericItemAddedMessage::_objGenericIdFunc(CustomDataInput *input) {
    this->objGenericId = input->readVarUhShort();
    if (this->objGenericId < 0) {

    }
}
