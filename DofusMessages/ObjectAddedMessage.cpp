#include "ObjectAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectAddedMessage::deserialize(CustomDataInput *input) {
    this->object.deserialize(input);
    this->_originFunc(input);
}

void ObjectAddedMessage::_originFunc(CustomDataInput *input) {
    this->origin = input->readByte();
    if (this->origin < 0) {

    }
}
