#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemGenericQuantity::deserialize(CustomDataInput *input) {
    Item::deserialize(input);
    this->_objectGIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItemGenericQuantity::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void ObjectItemGenericQuantity::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
