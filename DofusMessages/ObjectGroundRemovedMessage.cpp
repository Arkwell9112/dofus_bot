#include "ObjectGroundRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectGroundRemovedMessage::deserialize(CustomDataInput *input) {
    this->_cellFunc(input);
}

void ObjectGroundRemovedMessage::_cellFunc(CustomDataInput *input) {
    this->cell = input->readVarUhShort();
    if (this->cell < 0 || this->cell > 559) {

    }
}
