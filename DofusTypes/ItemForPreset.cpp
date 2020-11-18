#include "Preset.h"
#include "ItemForPreset.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ItemForPreset::deserialize(CustomDataInput *input) {
    this->_positionFunc(input);
    this->_objGidFunc(input);
    this->_objUidFunc(input);
}

void ItemForPreset::_positionFunc(CustomDataInput *input) {
    this->position = input->readShort();
    if (this->position < 0) {

    }
}

void ItemForPreset::_objGidFunc(CustomDataInput *input) {
    this->objGid = input->readVarUhShort();
    if (this->objGid < 0) {

    }
}

void ItemForPreset::_objUidFunc(CustomDataInput *input) {
    this->objUid = input->readVarUhInt();
    if (this->objUid < 0) {

    }
}
