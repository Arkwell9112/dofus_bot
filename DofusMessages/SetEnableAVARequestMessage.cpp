#include "SetEnableAVARequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SetEnableAVARequestMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void SetEnableAVARequestMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
