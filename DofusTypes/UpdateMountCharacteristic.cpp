#include "UpdateMountCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateMountCharacteristic::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
}

void UpdateMountCharacteristic::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
