#include "GuestModeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuestModeMessage::deserialize(CustomDataInput *input) {
    this->_activeFunc(input);
}

void GuestModeMessage::_activeFunc(CustomDataInput *input) {
    this->active = input->readBoolean();
}
