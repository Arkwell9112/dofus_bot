#include "UpdateMountIntegerCharacteristic.h"
#include "UpdateMountCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateMountIntegerCharacteristic::deserialize(CustomDataInput *input) {
    UpdateMountCharacteristic::deserialize(input);
    this->_valueFunc(input);
}

void UpdateMountIntegerCharacteristic::_valueFunc(CustomDataInput *input) {
    this->value = input->readInt();
}
