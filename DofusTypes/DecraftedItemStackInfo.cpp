#include "Item.h"
#include "DecraftedItemStackInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DecraftedItemStackInfo::deserialize(CustomDataInput *input) {
    unsigned int _val4 = 0;
    unsigned int _val5 = 0;
    this->_objectUIDFunc(input);
    this->_bonusMinFunc(input);
    this->_bonusMaxFunc(input);
    unsigned int _runesIdLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _runesIdLen; _i4++) {
        _val4 = input->readVarUhShort();
        if (_val4 < 0) {

        }
        this->runesId.push_back(_val4);
    }
    unsigned int _runesQtyLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _runesQtyLen; _i5++) {
        _val5 = input->readVarUhInt();
        if (_val5 < 0) {

        }
        this->runesQty.push_back(_val5);
    }
}

void DecraftedItemStackInfo::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void DecraftedItemStackInfo::_bonusMinFunc(CustomDataInput *input) {
    this->bonusMin = input->readFloat();
}

void DecraftedItemStackInfo::_bonusMaxFunc(CustomDataInput *input) {
    this->bonusMax = input->readFloat();
}

void DecraftedItemStackInfo::_runesIdFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->runesId.push_back(_val);
}

void DecraftedItemStackInfo::_runesQtyFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->runesQty.push_back(_val);
}
