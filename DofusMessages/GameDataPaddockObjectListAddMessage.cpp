#include "GameDataPaddockObjectListAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockItem.h"

#include "../DofusTypes/Item.h"

void GameDataPaddockObjectListAddMessage::deserialize(CustomDataInput *input) {
    PaddockItem _item1;
    unsigned int _paddockItemDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddockItemDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->paddockItemDescription.push_back(_item1);
    }
}