#include "ObjectEffects.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffects::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    ObjectEffect _item1;
    unsigned int _effectsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _effectsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<ObjectEffect *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->effects.push_back(_item1);
    }
}

void ObjectEffects::_effectsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    ObjectEffect _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}
