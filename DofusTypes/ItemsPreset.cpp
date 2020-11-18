#include "Preset.h"
#include "ItemsPreset.h"
#include "ItemForPreset.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ItemsPreset::deserialize(CustomDataInput *input) {
    ItemForPreset _item1;
    Preset::deserialize(input);
    unsigned int _itemsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _itemsLen; _i1++) {
        _item1.deserialize(input);
        this->items.push_back(_item1);
    }
    this->_mountEquippedFunc(input);
    this->look.deserialize(input);
}

void ItemsPreset::_mountEquippedFunc(CustomDataInput *input) {
    this->mountEquipped = input->readBoolean();
}
