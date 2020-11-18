#include "WarnOnPermaDeathStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WarnOnPermaDeathStateMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void WarnOnPermaDeathStateMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
