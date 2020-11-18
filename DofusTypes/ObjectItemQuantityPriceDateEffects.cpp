#include "ObjectItemQuantityPriceDateEffects.h"
#include "ObjectItemQuantity.h"
#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemQuantityPriceDateEffects::deserialize(CustomDataInput *input) {
    ObjectItemGenericQuantity::deserialize(input);
    this->_priceFunc(input);
    this->effects.deserialize(input);
    this->_dateFunc(input);
}

void ObjectItemQuantityPriceDateEffects::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}

void ObjectItemQuantityPriceDateEffects::_dateFunc(CustomDataInput *input) {
    this->date = input->readInt();
    if (this->date < 0) {

    }
}
