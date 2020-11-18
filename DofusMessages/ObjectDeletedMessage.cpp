#include "ObjectDeletedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectDeletedMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
}

void ObjectDeletedMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}
