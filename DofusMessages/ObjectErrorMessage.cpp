#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void ObjectErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
}
