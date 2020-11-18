#include "ObjectFeedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

void ObjectFeedMessage::deserialize(CustomDataInput *input) {
    ObjectItemQuantity _item2;
    this->_objectUIDFunc(input);
    unsigned int _mealLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _mealLen; _i2++) {
        _item2.deserialize(input);
        this->meal.push_back(_item2);
    }
}

void ObjectFeedMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}
