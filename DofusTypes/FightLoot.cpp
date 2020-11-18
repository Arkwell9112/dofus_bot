#include "FightLoot.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightLoot::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _objectsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _val1 = input->readVarUhInt();
        if (_val1 < 0) {

        }
        this->objects.push_back(_val1);
    }
    this->_kamasFunc(input);
}

void FightLoot::_objectsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->objects.push_back(_val);
}

void FightLoot::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}
