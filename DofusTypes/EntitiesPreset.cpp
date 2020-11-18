#include "Preset.h"
#include "EntitiesPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EntitiesPreset::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    Preset::deserialize(input);
    this->_iconIdFunc(input);
    unsigned int _entityIdsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _entityIdsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->entityIds.push_back(_val2);
    }
}

void EntitiesPreset::_iconIdFunc(CustomDataInput *input) {
    this->iconId = input->readShort();
    if (this->iconId < 0) {

    }
}

void EntitiesPreset::_entityIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->entityIds.push_back(_val);
}
