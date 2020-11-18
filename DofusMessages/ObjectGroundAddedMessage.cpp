#include "ObjectGroundAddedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectGroundAddedMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
    this->_objectGIDFunc(input);
}

void ObjectGroundAddedMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}

void ObjectGroundAddedMessage::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}
