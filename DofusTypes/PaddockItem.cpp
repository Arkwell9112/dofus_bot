#include "PaddockItem.h"
#include "ObjectItemInRolePlay.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockItem::deserialize(CustomDataInput *input) {
    ObjectItemInRolePlay::deserialize(input);
    this->durability.deserialize(input);
}