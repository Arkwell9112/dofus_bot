#include "ObjectsDeletedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectsDeletedMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _objectUIDLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectUIDLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->objectUID.push_back(_val1);
    }
}

void ObjectsDeletedMessage::_objectUIDFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->objectUID.push_back(_val);
}
