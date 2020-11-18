#include "ObjectSetPositionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectSetPositionMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_positionFunc(input);
    this->_quantityFunc(input);
}

void ObjectSetPositionMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectSetPositionMessage::_positionFunc(CustomDataInput *input) {
    this->position = input->readShort();
    if (this->position < 0) {

    }
}

void ObjectSetPositionMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
