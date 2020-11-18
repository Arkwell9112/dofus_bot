#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemToSell::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    ObjectEffect _item2;
    Item::deserialize(input);
    this->_objectGIDFunc(input);
    unsigned int _effectsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _effectsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<ObjectEffect *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->effects.push_back(_item2);
    }
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
    this->_objectPriceFunc(input);
}

void ObjectItemToSell::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void ObjectItemToSell::_effectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectItemToSell::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectItemToSell::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}

void ObjectItemToSell::_objectPriceFunc(CustomDataInput *input) {
    this->objectPrice = input->readVarUhLong();
    if (this->objectPrice < 0 || this->objectPrice > 9007199254740990) {

    }
}
