#include "ExchangeBidHouseInListRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseInListRemovedMessage::deserialize(CustomDataInput *input) {
    this->_itemUIDFunc(input);
    this->_objectGIDFunc(input);
    this->_objectTypeFunc(input);
}

void ExchangeBidHouseInListRemovedMessage::_itemUIDFunc(CustomDataInput *input) {
    this->itemUID = input->readInt();
}

void ExchangeBidHouseInListRemovedMessage::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void ExchangeBidHouseInListRemovedMessage::_objectTypeFunc(CustomDataInput *input) {
    this->objectType = input->readInt();
    if (this->objectType < 0) {

    }
}
