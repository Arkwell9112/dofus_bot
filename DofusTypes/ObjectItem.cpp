#include "ObjectItem.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItem::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    ObjectEffect _item3;
    Item::deserialize(input);
    this->_positionFunc(input);
    this->_objectGIDFunc(input);
    unsigned int _effectsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _effectsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<ObjectEffect *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->effects.push_back(_item3);
    }
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItem::_positionFunc(CustomDataInput *input) {
    this->position = input->readShort();
    if (this->position < 0) {

    }
}

void ObjectItem::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void ObjectItem::_effectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectItem::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectItem::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
