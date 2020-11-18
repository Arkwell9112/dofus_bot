#include "ObjectQuantityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectQuantityMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
    this->_originFunc(input);
}

void ObjectQuantityMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectQuantityMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}

void ObjectQuantityMessage::_originFunc(CustomDataInput *input) {
    this->origin = input->readByte();
    if (this->origin < 0) {

    }
}
