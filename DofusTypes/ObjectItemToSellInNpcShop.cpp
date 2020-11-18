#include "ObjectItemToSellInNpcShop.h"
#include "ObjectItemToSell.h"
#include "ObjectItemMinimalInformation.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemToSellInNpcShop::deserialize(CustomDataInput *input) {
    ObjectItemMinimalInformation::deserialize(input);
    this->_objectPriceFunc(input);
    this->_buyCriterionFunc(input);
}

void ObjectItemToSellInNpcShop::_objectPriceFunc(CustomDataInput *input) {
    this->objectPrice = input->readVarUhLong();
    if (this->objectPrice < 0 || this->objectPrice > 9007199254740990) {

    }
}

void ObjectItemToSellInNpcShop::_buyCriterionFunc(CustomDataInput *input) {
    this->buyCriterion = input->readUTF();
}
