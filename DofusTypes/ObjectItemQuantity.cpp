#include "ObjectItemQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemQuantity::deserialize(CustomDataInput *input) {
    Item::deserialize(input);
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItemQuantity::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectItemQuantity::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
