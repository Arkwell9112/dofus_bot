#include "ObjectMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectMovementMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_positionFunc(input);
}

void ObjectMovementMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectMovementMessage::_positionFunc(CustomDataInput *input) {
    this->position = input->readShort();
    if (this->position < 0) {

    }
}
