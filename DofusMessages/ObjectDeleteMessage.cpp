#include "ObjectDeleteMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectDeleteMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectDeleteMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectDeleteMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
