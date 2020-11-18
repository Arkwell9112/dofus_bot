#include "ObjectItemToSellInHumanVendorShop.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectItemToSellInHumanVendorShop::deserialize(CustomDataInput *input) {
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
    this->_publicPriceFunc(input);
}

void ObjectItemToSellInHumanVendorShop::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void ObjectItemToSellInHumanVendorShop::_effectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectItemToSellInHumanVendorShop::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ObjectItemToSellInHumanVendorShop::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}

void ObjectItemToSellInHumanVendorShop::_objectPriceFunc(CustomDataInput *input) {
    this->objectPrice = input->readVarUhLong();
    if (this->objectPrice < 0 || this->objectPrice > 9007199254740990) {

    }
}

void ObjectItemToSellInHumanVendorShop::_publicPriceFunc(CustomDataInput *input) {
    this->publicPrice = input->readVarUhLong();
    if (this->publicPrice < 0 || this->publicPrice > 9007199254740990) {

    }
}
