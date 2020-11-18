#include "ObjectUseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectUseMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
}

void ObjectUseMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}
