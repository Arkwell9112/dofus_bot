#include "ExchangeObjectMoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectMoveMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ExchangeObjectMoveMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ExchangeObjectMoveMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarInt();
}
