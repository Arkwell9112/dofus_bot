#include "ExchangeBidHouseGenericItemRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ExchangeBidHouseGenericItemRemovedMessage::deserialize(CustomDataInput *input) {
    this->_objGenericIdFunc(input);
}

void ExchangeBidHouseGenericItemRemovedMessage::_objGenericIdFunc(CustomDataInput *input) {
    this->objGenericId = input->readVarUhShort();
    if (this->objGenericId < 0) {

    }
}
