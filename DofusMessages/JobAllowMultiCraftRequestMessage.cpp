#include "JobAllowMultiCraftRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobAllowMultiCraftRequestMessage::deserialize(CustomDataInput *input) {
    this->_enabledFunc(input);
}

void JobAllowMultiCraftRequestMessage::_enabledFunc(CustomDataInput *input) {
    this->enabled = input->readBoolean();
}
