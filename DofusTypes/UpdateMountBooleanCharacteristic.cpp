#include "UpdateMountCharacteristic.h"
#include "UpdateMountBooleanCharacteristic.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateMountBooleanCharacteristic::deserialize(CustomDataInput *input) {
    UpdateMountCharacteristic::deserialize(input);
    this->_valueFunc(input);
}

void UpdateMountBooleanCharacteristic::_valueFunc(CustomDataInput *input) {
    this->value = input->readBoolean();
}
