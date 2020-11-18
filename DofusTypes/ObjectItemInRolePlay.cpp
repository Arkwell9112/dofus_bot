#include "ObjectItemInRolePlay.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemInRolePlay::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
    this->_objectGIDFunc(input);
}

void ObjectItemInRolePlay::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}

void ObjectItemInRolePlay::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}
