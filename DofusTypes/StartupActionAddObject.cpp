#include "StartupActionAddObject.h"
#include "ObjectItemInformationWithQuantity.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StartupActionAddObject::deserialize(CustomDataInput *input) {
    ObjectItemInformationWithQuantity _item6;
    this->_uidFunc(input);
    this->_titleFunc(input);
    this->_textFunc(input);
    this->_descUrlFunc(input);
    this->_pictureUrlFunc(input);
    unsigned int _itemsLen = input->readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _itemsLen; _i6++) {
        _item6.deserialize(input);
        this->items.push_back(_item6);
    }
}

void StartupActionAddObject::_uidFunc(CustomDataInput *input) {
    this->uid = input->readInt();
    if (this->uid < 0) {

    }
}

void StartupActionAddObject::_titleFunc(CustomDataInput *input) {
    this->title = input->readUTF();
}

void StartupActionAddObject::_textFunc(CustomDataInput *input) {
    this->text = input->readUTF();
}

void StartupActionAddObject::_descUrlFunc(CustomDataInput *input) {
    this->descUrl = input->readUTF();
}

void StartupActionAddObject::_pictureUrlFunc(CustomDataInput *input) {
    this->pictureUrl = input->readUTF();
}
