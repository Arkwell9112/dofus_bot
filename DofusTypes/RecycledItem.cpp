#include "RecycledItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void RecycledItem::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_qtyFunc(input);
}

void RecycledItem::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void RecycledItem::_qtyFunc(CustomDataInput *input) {
    this->qty = input->readUnsignedInt();
    if (this->qty < 0 || this->qty > 4294967295) {

    }
}
