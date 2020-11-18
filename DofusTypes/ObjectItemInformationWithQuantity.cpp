#include "ObjectItemMinimalInformation.h"
#include "ObjectItemInformationWithQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemInformationWithQuantity::deserialize(CustomDataInput *input) {
    ObjectItemMinimalInformation::deserialize(input);
    this->_quantityFunc(input);
}

void ObjectItemInformationWithQuantity::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
