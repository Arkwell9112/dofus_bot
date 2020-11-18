#include "ObjectDropMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectDropMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectDropMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectDropMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
