#include "ObjectEffectMount.h"
#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectMount::deserialize(CustomDataInput *input) {
    ObjectEffectInteger _item13;
    unsigned int _val14 = 0;
    ObjectEffect::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_expirationDateFunc(input);
    this->_modelFunc(input);
    this->_nameFunc(input);
    this->_ownerFunc(input);
    this->_levelFunc(input);
    this->_reproductionCountFunc(input);
    this->_reproductionCountMaxFunc(input);
    unsigned int _effectsLen = input->readUnsignedShort();
    for (unsigned int _i13 = 0; _i13 < _effectsLen; _i13++) {
        _item13.deserialize(input);
        this->effects.push_back(_item13);
    }
    unsigned int _capacitiesLen = input->readUnsignedShort();
    for (unsigned int _i14 = 0; _i14 < _capacitiesLen; _i14++) {
        _val14 = input->readVarUhInt();
        if (_val14 < 0) {

        }
        this->capacities.push_back(_val14);
    }
}

void ObjectEffectMount::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRideable = BooleanByteWrapper::getFlag(_box0, 1);
    this->isFeconded = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFecondationReady = BooleanByteWrapper::getFlag(_box0, 3);
}

void ObjectEffectMount::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}

void ObjectEffectMount::_expirationDateFunc(CustomDataInput *input) {
    this->expirationDate = input->readVarUhLong();
    if (this->expirationDate < 0 || this->expirationDate > 9007199254740990) {

    }
}

void ObjectEffectMount::_modelFunc(CustomDataInput *input) {
    this->model = input->readVarUhInt();
    if (this->model < 0) {

    }
}

void ObjectEffectMount::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void ObjectEffectMount::_ownerFunc(CustomDataInput *input) {
    this->owner = input->readUTF();
}

void ObjectEffectMount::_levelFunc(CustomDataInput *input) {
    this->level = input->readByte();
    if (this->level < 0) {

    }
}

void ObjectEffectMount::_reproductionCountFunc(CustomDataInput *input) {
    this->reproductionCount = input->readVarInt();
}

void ObjectEffectMount::_reproductionCountMaxFunc(CustomDataInput *input) {
    this->reproductionCountMax = input->readVarUhInt();
    if (this->reproductionCountMax < 0) {

    }
}

void ObjectEffectMount::_capacitiesFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->capacities.push_back(_val);
}
