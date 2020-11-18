#include "Preset.h"
#include "IdolsPreset.h"
#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdolsPreset::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    Preset::deserialize(input);
    this->_iconIdFunc(input);
    unsigned int _idolIdsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _idolIdsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->idolIds.push_back(_val2);
    }
}

void IdolsPreset::_iconIdFunc(CustomDataInput *input) {
    this->iconId = input->readShort();
    if (this->iconId < 0) {

    }
}

void IdolsPreset::_idolIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->idolIds.push_back(_val);
}
