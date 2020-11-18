#include "StorageObjectsUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void StorageObjectsUpdateMessage::deserialize(CustomDataInput *input) {
    ObjectItem _item1;
    unsigned int _objectListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectListLen; _i1++) {
        _item1.deserialize(input);
        this->objectList.push_back(_item1);
    }
}