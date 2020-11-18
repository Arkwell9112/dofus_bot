#include "ObjectEffect.h"
#include "BidExchangerObjectInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BidExchangerObjectInfo::deserialize(CustomDataInput *input) {
    unsigned int _id4 = 0;
    ObjectEffect _item4;
    double _val5 = 0;
    this->_objectUIDFunc(input);
    this->_objectGIDFunc(input);
    this->_objectTypeFunc(input);
    unsigned int _effectsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _effectsLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<ObjectEffect *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->effects.push_back(_item4);
    }
    unsigned int _pricesLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _pricesLen; _i5++) {
        _val5 = input->readVarUhLong();
        if (_val5 < 0 || _val5 > 9007199254740990) {

        }
        this->prices.push_back(_val5);
    }
}

void BidExchangerObjectInfo::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void BidExchangerObjectInfo::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}

void BidExchangerObjectInfo::_objectTypeFunc(CustomDataInput *input) {
    this->objectType = input->readInt();
    if (this->objectType < 0) {

    }
}

void BidExchangerObjectInfo::_effectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void BidExchangerObjectInfo::_pricesFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->prices.push_back(_val);
}
