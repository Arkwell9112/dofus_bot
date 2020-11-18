#include "StorageObjectRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StorageObjectRemoveMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
}

void StorageObjectRemoveMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}
