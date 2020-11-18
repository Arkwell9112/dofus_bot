#include "SpellItem.h"
#include "Item.h"
#include "ForgettableSpellItem.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ForgettableSpellItem::deserialize(CustomDataInput *input) {
    SpellItem::deserialize(input);
    this->_availableFunc(input);
}

void ForgettableSpellItem::_availableFunc(CustomDataInput *input) {
    this->available = input->readBoolean();
}
