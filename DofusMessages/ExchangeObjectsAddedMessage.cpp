#include "ObjectsAddedMessage.h"
#include "ExchangeObjectsAddedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ExchangeObjectsAddedMessage::deserialize(CustomDataInput *input) {
    ObjectItem _item1;
    ExchangeObjectMessage::deserialize(input);
    unsigned int _objectLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectLen; _i1++) {
        _item1.deserialize(input);
        this->object.push_back(_item1);
    }
}