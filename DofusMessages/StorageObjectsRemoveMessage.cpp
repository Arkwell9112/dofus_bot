#include "StorageObjectsRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StorageObjectsRemoveMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _objectUIDListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectUIDListLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->objectUIDList.push_back(_val1);
    }
}

void StorageObjectsRemoveMessage::_objectUIDListFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->objectUIDList.push_back(_val);
}
