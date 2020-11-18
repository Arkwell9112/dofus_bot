#include "ItemDurability.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ItemDurability::deserialize(CustomDataInput *input) {
    this->_durabilityFunc(input);
    this->_durabilityMaxFunc(input);
}

void ItemDurability::_durabilityFunc(CustomDataInput *input) {
    this->durability = input->readShort();
}

void ItemDurability::_durabilityMaxFunc(CustomDataInput *input) {
    this->durabilityMax = input->readShort();
}
