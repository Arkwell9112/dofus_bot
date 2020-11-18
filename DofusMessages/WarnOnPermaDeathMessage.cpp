#include "WarnOnPermaDeathMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WarnOnPermaDeathMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void WarnOnPermaDeathMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
