#include "ObjectsQuantityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ObjectsQuantityMessage::deserialize(CustomDataInput *input) {
    ObjectItemQuantity _item1;
    unsigned int _objectsUIDAndQtyLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsUIDAndQtyLen; _i1++) {
        _item1.deserialize(input);
        this->objectsUIDAndQty.push_back(_item1);
    }
}