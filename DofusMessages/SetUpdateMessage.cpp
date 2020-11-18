#include "SetUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectEffect.h"

void SetUpdateMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    unsigned int _id3 = 0;
    ObjectEffect _item3;
    this->_setIdFunc(input);
    unsigned int _setObjectsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _setObjectsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->setObjects.push_back(_val2);
    }
    unsigned int _setEffectsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _setEffectsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<ObjectEffect *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->setEffects.push_back(_item3);
    }
}

void SetUpdateMessage::_setIdFunc(CustomDataInput *input) {
    this->setId = input->readVarUhShort();
    if (this->setId < 0) {

    }
}

void SetUpdateMessage::_setObjectsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->setObjects.push_back(_val);
}

void SetUpdateMessage::_setEffectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->setEffects.push_back(_item);
}
