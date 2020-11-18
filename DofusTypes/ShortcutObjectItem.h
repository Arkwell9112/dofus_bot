#ifndef SHORTCUTOBJECTITEM_H
#define SHORTCUTOBJECTITEM_H

#include "ShortcutObject.h"
#include "Shortcut.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutObjectItem : public ShortcutObject {
public:
    int itemUID = 0;
    int itemGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _itemUIDFunc(CustomDataInput *input);

    void _itemGIDFunc(CustomDataInput *input);
};

#endif