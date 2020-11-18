#include "MountHarnessColorsUpdateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountHarnessColorsUpdateRequestMessage::deserialize(CustomDataInput *input) {
    this->_useHarnessColorsFunc(input);
}

void MountHarnessColorsUpdateRequestMessage::_useHarnessColorsFunc(CustomDataInput *input) {
    this->useHarnessColors = input->readBoolean();
}
