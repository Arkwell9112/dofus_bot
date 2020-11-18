#include "SetEnablePVPRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SetEnablePVPRequestMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void SetEnablePVPRequestMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
