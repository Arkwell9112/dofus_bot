#include "ShortcutObjectItem.h"
#include "ShortcutObject.h"
#include "Shortcut.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutObjectItem::deserialize(CustomDataInput *input) {
    ShortcutObject::deserialize(input);
    this->_itemUIDFunc(input);
    this->_itemGIDFunc(input);
}

void ShortcutObjectItem::_itemUIDFunc(CustomDataInput *input) {
    this->itemUID = input->readInt();
}

void ShortcutObjectItem::_itemGIDFunc(CustomDataInput *input) {
    this->itemGID = input->readInt();
}
