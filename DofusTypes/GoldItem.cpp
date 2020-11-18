#include "Item.h"
#include "GoldItem.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GoldItem::deserialize(CustomDataInput *input) {
    Item::deserialize(input);
    this->_sumFunc(input);
}

void GoldItem::_sumFunc(CustomDataInput *input) {
    this->sum = input->readVarUhLong();
    if (this->sum < 0 || this->sum > 9007199254740990) {

    }
}
